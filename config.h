/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2018 Skyler Lewis
Copyright 2018 Yuya Yano

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

//#define EE_HANDS
#define MASTER_RIGHT

#ifdef MOUSEKEY_ENABLE
  #define MOUSEKEY_DELAY 0
  #define MOUSEKEY_INTERVAL 0
  #define MOUSEKEY_MAX_SPEED 2
  #define MOUSEKEY_TIME_TO_MAX 50
  #define MOUSEKEY_WHEEL_MAX_SPEED 1
  #define MOUSEKEY_WHEEL_TIME_TO_MAX 100
#endif

#ifdef TAPPING_TERM
#undef TAPPING_TERM
#endif // TAPPING_TERM
#define TAPPING_TERM 180

#endif
