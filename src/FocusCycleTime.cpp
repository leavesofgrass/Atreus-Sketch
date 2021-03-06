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

#include "FocusCycleTime.h"

#include "Kaleidoscope-CycleTimeReport.h"
#include "Kaleidoscope-FocusSerial.h"

namespace kaleidoscope {

uint32_t FocusCycleTime::average_loop_time;

EventHandlerResult FocusCycleTime::onFocusEvent(const char *command) {
  const char *cmd = PSTR("cycletime");

  if (::Focus.handleHelp(command, cmd))
    return EventHandlerResult::OK;

  if (strcmp_P(command, cmd) != 0)
    return EventHandlerResult::OK;

  Serial.println(average_loop_time);
  return EventHandlerResult::EVENT_CONSUMED;
}

}

kaleidoscope::FocusCycleTime FocusCycleTime;

void cycleTimeReport(void) {
  FocusCycleTime.average_loop_time = CycleTimeReport.average_loop_time;
}
