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

#include "Kaleidoscope-Focus.h"

#include "FocusLayout.h"
#include "layers.h"

namespace kaleidoscope {

EventHandlerResult FocusLayout::onSetup() {
  ::Focus.addHook(FOCUS_HOOK(onFocusEvent, "layout"));

  return EventHandlerResult::OK;
}

bool FocusLayout::onFocusEvent(const char *command) {
  char layout;

  if (strcmp_P(command, PSTR("layout")) != 0)
    return false;

  if (Serial.peek() == '\n')
    goto report;

  layout = (char)Serial.read();

  if (layout == 'a') {
    Layer.off(DVORAK);
    Layer.on(ADORE);
  } else if (layout == 'd') {
    Layer.off(ADORE);
    Layer.on(DVORAK);
  }

report:
    Serial.println(Layer.isOn(ADORE) ? "a" : "d");
    return true;
}
}

kaleidoscope::FocusLayout FocusLayout;
