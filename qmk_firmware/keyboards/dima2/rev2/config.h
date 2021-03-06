/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4273
#define PRODUCT_ID      0x0412
#define DEVICE_VER      0x0000
#define MANUFACTURER    Dima
#define PRODUCT         dima2
#define DESCRIPTION     An ergo keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 6
#define DIODE_DIRECTION COL2ROW

// wiring of each half
#define MATRIX_ROW_PINS { B2, B6, B5, B4 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3 }

//#define USE_I2C
#define USE_SERIAL
#define SOFT_SERIAL_PIN D0
#define SPLIT_USB_DETECT

#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
