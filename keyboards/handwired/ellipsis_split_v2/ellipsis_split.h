#pragma once

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define LAYOUT_all( \
        L01, L02, L03, L04, L05, L06, L07, R00, R01, R02, R03, R04, R05, R06, R07, \
        L11, L12, L13, L14, L15, L16, L17, R10, R11, R12, R13, R14, R15, R16, R17, R18, \
   L20, L21, L22, L23, L24, L25, L26, L27, R20, R21, R22, R23, R24, R25, R26, R27, R28, \
   L30, L31, L32, L33, L34, L35, L36, L37, R30, R31, R32, R33, R34, R35, R36, R37, R38, \
        L41, L42, L43, L44, L45, L46,      R40, R41, R42, R43, R44,      R45, R46, R48 \
) \
{ \
   { KC_NO, L01, L02, L03, L04, L05, L06, L07 }, \
   { KC_NO, L11, L12, L13, L14, L15, L16, L17 }, \
   { L20,   L21, L22, L23, L24, L25, L26, L27 }, \
   { L30,   L31, L32, L33, L34, L35, L36, L37 }, \
   { KC_NO, L41, L42, L43, L44, L45, L46, KC_NO }, \
   { R00, R01, R02, R03, R04, R05, R06, R07, KC_NO }, \
   { R10, R11, R12, R13, R14, R15, R16, R17,   R18 }, \
   { R20, R21, R22, R23, R24, R25, R26, R27,   R28 }, \
   { R30, R31, R32, R33, R34, R35, R36, R37,   R38 }, \
   { R40, R41, R42, R43, R44, R45, R46, KC_NO, R48 } \
}
