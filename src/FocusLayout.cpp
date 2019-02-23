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

#include "Kaleidoscope-FocusSerial.h"
#include "Kaleidoscope-EEPROM-Settings.h"

#include "FocusLayout.h"
#include "layers.h"

namespace kaleidoscope {

uint16_t FocusLayout::settings_base_;

EventHandlerResult FocusLayout::onSetup() {
  ::EEPROMSettings.onSetup();

  settings_base_ = ::EEPROMSettings.requestSlice(1);
  char layout = (char)EEPROM.read(settings_base_);

  selectLayout(layout);

  return EventHandlerResult::OK;
}

void FocusLayout::selectLayout(const char layout) {
  if (layout == 'a') {
    Layer.deactivate(_DVORAK);
    Layer.activate(_ADORE);
  } else if (layout == 'd') {
    Layer.deactivate(_ADORE);
    Layer.activate(_DVORAK);
  } else {
    return;
  }

  EEPROM.update(settings_base_, layout);
}

EventHandlerResult FocusLayout::onFocusEvent(const char *command) {
  char layout;
  const char *cmd = PSTR("layout");

  if (::Focus.handleHelp(command, cmd))
    return EventHandlerResult::OK;

  if (strcmp_P(command, cmd) != 0)
    return EventHandlerResult::OK;

  if (Serial.peek() == '\n')
    goto report;

  layout = (char)Serial.read();

  selectLayout(layout);

report:
  Serial.println(Layer.isActive(_ADORE) ? "a" : "d");
  return EventHandlerResult::EVENT_CONSUMED;
}
}

kaleidoscope::FocusLayout FocusLayout;
