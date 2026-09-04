#pragma once

#include "config_common.h"

#define DEBOUNCE 16

#define EE_HANDS
#define SPLIT_USB_DETECT

#define SOFT_SERIAL_PIN D2

#define MATRIX_ROWS 10 // Double for split
#define MATRIX_COLS 9

// Change this to how you wired your keyboard
// COLS: Left to right, ROWS: Top to bottom
#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F5, F4, B5 } // Last pin unused, just need to match number of columns
#define MATRIX_ROW_PINS_RIGHT { F4, F5, F6, F7, B1 }
#define MATRIX_COL_PINS_RIGHT { D1, D0, D4, C6, D7, B4, E6, B6, B2 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL
