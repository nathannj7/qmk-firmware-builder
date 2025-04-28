/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x2B, 0xBC, 0xB7, 0x62, 0x3F, 0x97, 0x84, 0x6E}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 6 }

/* Add timeout for RGB lights */
#define RGBLIGHT_SLEEP 
#define RGBLIGHT_TIMEOUT 60000

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define NO_ACTION_TAPPING

/* Reduce number of layers */

#define DYNAMIC_KEYMAP_LAYER_COUNT 2