/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xF6, 0x6D, 0xB4, 0x30, 0x09, 0x62, 0x60, 0x54}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS  { 3, 1 }

/* Add timeout for RGB lights */
#define RGBLIGHT_SLEEP 
#define RGBLIGHT_TIMEOUT 60000

/* Bin out some stuff to make it fit in ROM */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define NO_ACTION_TAPPING

#define DYNAMIC_KEYMAP_LAYER_COUNT 2

