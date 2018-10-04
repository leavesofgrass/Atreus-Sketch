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

#pragma once

#include "layers.h"

#define Key_Exclamation LSHIFT(Key_1)
#define Key_At LSHIFT(Key_2)
#define Key_Hash LSHIFT(Key_3)
#define Key_Dollar LSHIFT(Key_4)
#define Key_Percent LSHIFT(Key_5)
#define Key_Caret LSHIFT(Key_6)
#define Key_And LSHIFT(Key_7)
#define Key_Star LSHIFT(Key_8)
#define Key_Plus LSHIFT(Key_Equals)
#define Key_Underscore LSHIFT(Key_Minus)

#define Key_MNext Consumer_ScanNextTrack
#define Key_MPlay Consumer_PlaySlashPause
#define Key_LeftCurly Key_LeftCurlyBracket
#define Key_RightCurly Key_RightCurlyBracket
#define Key_VolInc Consumer_VolumeIncrement
#define Key_VolDec Consumer_VolumeDecrement

#define MO(n) ShiftToLayer(n)

/* *INDENT-OFF* */
KEYMAPS(
  [ADORE] = KEYMAP_STACKED(
       Key_Quote  ,Key_W       ,Key_C   ,Key_H   ,Key_F
      ,Key_A      ,Key_O       ,Key_E   ,Key_I   ,Key_U
      ,Key_Z      ,Key_Q       ,Key_X   ,Key_B   ,Key_Comma
      ,OSL(LOWER) ,Key_LeftGui ,Key_Esc ,Key_Tab ,Key_Backspace ,OSM(LeftShift)

                 ,Key_M      ,Key_G     ,Key_L            ,Key_P        ,Key_Slash
                 ,Key_D      ,Key_R     ,Key_T            ,Key_N        ,Key_S
                 ,Key_Period ,Key_K     ,Key_V            ,Key_Y        ,Key_J
      ,Key_Enter ,Key_Space  ,Key_Minus ,OSM(LeftControl) ,OSM(LeftAlt) ,OSL(RAISE)
  ),

  [DVORAK] = KEYMAP_STACKED(
       Key_Quote  ,Key_Comma   ,Key_Period ,Key_P   ,Key_Y
      ,Key_A      ,Key_O       ,Key_E      ,Key_U   ,Key_I
      ,Key_Slash  ,Key_Q       ,Key_J      ,Key_K   ,Key_X
      ,OSL(LOWER) ,Key_LeftGui ,Key_Esc    ,Key_Tab ,Key_Backspace ,OSM(LeftShift)

                 ,Key_F     ,Key_G     ,Key_C            ,Key_R        ,Key_L
                 ,Key_D     ,Key_H     ,Key_T            ,Key_N        ,Key_S
                 ,Key_B     ,Key_M     ,Key_W            ,Key_V        ,Key_Z
      ,Key_Enter ,Key_Space ,Key_Minus ,OSM(LeftControl) ,OSM(LeftAlt) ,OSL(RAISE)
  ),

  [LOWER] = KEYMAP_STACKED
  (
       Key_Backtick  ,Key_Home      ,Key_UpArrow   ,Key_End        ,Key_PageUp
      ,Key_Backslash ,Key_LeftArrow ,Key_DownArrow ,Key_RightArrow ,Key_PageDown
      ,Key_At        ,Key_Star      ,Key_Dollar    ,Key_Caret      ,Key_Comma
      ,OSL(LOWER)    ,Key_LeftGui   ,Key_Esc       ,Key_Tab        ,Key_Backspace ,OSM(LeftShift)

                 ,Key_Semicolon ,Key_1     ,Key_2            ,Key_3        ,Key_Equals
                 ,Key_0         ,Key_4     ,Key_5            ,Key_6        ,Key_Plus
                 ,Key_Period    ,Key_7     ,Key_8            ,Key_9        ,Key_Underscore
      ,Key_Enter ,Key_Space     ,Key_Minus ,OSM(LeftControl) ,OSM(LeftAlt) ,M(M_TESO)
  ),

  [RAISE] = KEYMAP_STACKED
  (
       Key_MNext   ,Key_LeftBracket ,Key_RightBracket ,Key_LeftParen ,Key_RightParen
      ,Key_MPlay   ,Key_LeftCurly   ,Key_RightCurly   ,XXX           ,XXX
      ,Key_Percent ,Key_Exclamation ,Key_Hash         ,Key_And       ,M(M_RESET)
      ,M(M_TESO)   ,Key_LeftGui     ,Key_Esc          ,Key_Tab       ,Key_Backspace  ,OSM(LeftShift)

                 ,Key_VolInc ,Key_F1    ,Key_F2           ,Key_F3       ,Key_F10
                 ,Key_VolDec ,Key_F4    ,Key_F5           ,Key_F6       ,Key_F11
                 ,Key_Period ,Key_F7    ,Key_F8           ,Key_F9       ,Key_F12
      ,Key_Enter ,Key_Space  ,Key_Minus ,OSM(LeftControl) ,OSM(LeftAlt) ,OSL(RAISE)
  ),

  [TESO] = KEYMAP_STACKED
  (
       Key_1   ,Key_2 ,Key_3       ,Key_4           ,Key_5
      ,Key_Q   ,Key_W ,Key_E       ,Key_R           ,Key_Esc
      ,Key_A   ,Key_S ,Key_D       ,Key_F           ,Key_Backtick
      ,MO(AUX) ,Key_H ,Key_LeftAlt ,Key_LeftControl ,Key_Space ,Key_LeftShift

           ,XXX ,XXX ,XXX ,XXX ,M(M_ADORE)
           ,XXX ,XXX ,XXX ,XXX ,XXX
           ,XXX ,XXX ,XXX ,XXX ,XXX
      ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX
  ),

  [AUX] = KEYMAP_STACKED
  (
       XXX   ,Key_P ,Key_M ,Key_U ,Key_J
      ,XXX   ,Key_1 ,Key_2 ,Key_3 ,Key_I
      ,Key_0 ,Key_4 ,Key_5 ,Key_6 ,Key_K
      ,___   ,Key_7 ,Key_8 ,Key_9 ,Key_Space ,Key_Enter

           ,XXX ,XXX ,XXX ,XXX ,M(M_ADORE)
           ,XXX ,XXX ,XXX ,XXX ,XXX
           ,XXX ,XXX ,XXX ,XXX ,XXX
      ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX
  ),
)
/* *INDENT-ON* */
