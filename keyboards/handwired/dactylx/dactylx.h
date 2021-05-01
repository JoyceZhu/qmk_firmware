#pragma once

#include "quantum.h"

#define NOP KC_NO

#define LAYOUT_dactylx(\
    L06, L05, L04, L03, L02, L01, L00,             R00, R01, R02, R03, R04, R05, R06, \
    L16, L15, L14, L13, L12, L11, L10,             R10, R11, R12, R13, R14, R15, R16, \
    L26, L25, L24, L23, L22, L21, L20,             R20, R21, R22, R23, R24, R25, R26, \
    L36, L35, L34, L33, L32, L31,                       R31, R32, R33, R34, R35, R36, \
    L46, L45, L44, L43, L42, L41, L40,             R40, R41, R42, R43, R44, R45, R46, \
                   L53, L52, L51, L50,             R50, R51, R52, R53                 \
){\
    { L06, L05, L04, L03, L02, L01, L00 }, \
    { L16, L15, L14, L13, L12, L11, L10 }, \
    { L26, L25, L24, L23, L22, L21, L20 }, \
    { L36, L35, L34, L33, L32, L31, NOP }, \
    { L46, L45, L44, L43, L42, L41, L40 }, \
    { NOP, NOP, NOP, L53, L52, L51, L50 }, \
\
    { R00, R01, R02, R03, R04, R05, R06 }, \
    { R10, R11, R12, R13, R14, R15, R16 }, \
    { R20, R21, R22, R23, R24, R25, R26 }, \
    { NOP, R31, R32, R33, R34, R35, R36 }, \
    { R40, R41, R42, R43, R44, R45, R46 }, \
    { R50, R51, R52, R53, NOP, NOP, NOP }  \
}
