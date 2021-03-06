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
#include <Kaleidoscope-EEPROM-Keymap.h>
#include <Kaleidoscope-EEPROM-Settings.h>
#include "Kaleidoscope-Escape-OneShot.h"
#include "Kaleidoscope-FocusSerial.h"
#include "Kaleidoscope-Focus-Version.h"
#include "Kaleidoscope-Macros.h"
#include "Kaleidoscope-OneShot.h"
#include "Kaleidoscope-TapDance.h"
#include "Kaleidoscope-USB-Quirks.h"

#include "FocusCycleTime.h"
#include "FocusLayout.h"

#include "keymap.h"

MAKE_FOCUS_VERSION_COMMAND("algernon/Atreus-Sketch",
                           GIT_REV,
                           KALEIDOSCOPE_GITREV);

KALEIDOSCOPE_INIT_PLUGINS(
  CycleTimeReport,
  EEPROMSettings,
  EEPROMKeymap,
  Focus,
  FocusEEPROMCommand,
  FocusSettingsCommand,
  FocusVersionCommand,
  FocusLayout,
  FocusCycleTime,
  Macros,
  EscapeOneShot,
  OneShot,
  TapDance,
  USBQuirks
);

void setup() {
  Kaleidoscope.setup();
  EEPROMKeymap.setup(7);
}

void loop() {
  Kaleidoscope.loop();
}
