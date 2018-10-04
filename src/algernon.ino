/* -*- mode: c++ -*-
 * Atreus-Sketch -- algernon's Atreus Sketch
 * Copyright (C) 2018  Gergely Nagy
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "00-config.h"

#include "Kaleidoscope.h"
#include "Kaleidoscope-CycleTimeReport.h"
#include "Kaleidoscope-Focus.h"
#include "Kaleidoscope-Macros.h"
#include "Kaleidoscope-OneShot.h"

#include "FocusLayout.h"

enum {
  M_RESET,
  M_TESO,
  M_ADORE,
};

static struct {
  uint32_t average_loop_time;
} state;

#include "keymap.h"

KALEIDOSCOPE_INIT_PLUGINS(
    Focus,
    FocusLayout,
    Macros,
    OneShot,
    CycleTimeReport
);

/* CycleTimeReport */

bool focusCycleTime(const char *command) {
  if (strcmp_P(command, PSTR("cycletime")) != 0)
    return false;

  Serial.println(state.average_loop_time);
  return true;
}

void cycleTimeReport(void) {
  state.average_loop_time = CycleTimeReport.average_loop_time;
}

/** Macros **/

const macro_t *macroAction(uint8_t macroIndex, uint8_t keyState) {
  if (!keyToggledOn(keyState))
    return MACRO_NONE;

  switch (macroIndex) {
    case M_RESET:
      Atreus.resetDevice();
      break;
    case M_TESO:
      Layer.move(TESO);
      break;
    case M_ADORE:
      Layer.move(ADORE);
      break;
  }

  return MACRO_NONE;
}

/** MAIN **/

void setup() {
  Serial.begin(9600);

  Kaleidoscope.setup();

  Focus.addHook(FOCUS_HOOK_HELP);
  Focus.addHook(FOCUS_HOOK_VERSION);
  Focus.addHook(FOCUS_HOOK(focusCycleTime, "cycletime"));
}

void loop() {
  Kaleidoscope.loop();
}
