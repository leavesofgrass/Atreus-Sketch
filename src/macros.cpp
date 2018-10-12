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


#include "Kaleidoscope.h"
#include "Kaleidoscope-Macros.h"

#include "layers.h"
#include "macros.h"

const macro_t *macroAction(uint8_t macroIndex, uint8_t keyState) {
  if (!keyToggledOn(keyState))
    return MACRO_NONE;

  switch (macroIndex) {
  case M_RESET:
    Atreus.resetDevice();
    break;
  case M_TYPING:
    Layer.off(_TESO);
    break;
  }

  return MACRO_NONE;
}
