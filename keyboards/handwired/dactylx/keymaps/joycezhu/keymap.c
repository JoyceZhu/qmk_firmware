#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _WINDOWS 1
#define _FNPD 2
// TODO
#define _NAV 3


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_dactylx(
        KC_ESC , KC_1  , KC_2   , KC_3   , KC_4   , KC_5   , LT(_FNPD, KC_MPRV),       LT(_FNPD, KC_MNXT), KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , TO(1),
        KC_TAB , KC_Q  , KC_W   , KC_E   , KC_R   , KC_T   , KC_VOLU,      KC_VOLD, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSLS,
        LALT_T(KC_CAPS), KC_A  , KC_S   , KC_D   , KC_F   , KC_G   , KC_DEL,
           KC_MPLY, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z  , KC_X   , KC_C   , KC_V   , KC_B,  KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
        // bottom row / thumb cluster
        LCTL_T(KC_PSCR), KC_LBRC, KC_RBRC, KC_EQL, KC_MINS,
            /* lthumb */ LSFT_T(KC_GRV), LGUI_T(KC_BSPC) ,
            /* rthumb */ KC_SPC , LT(_NAV,KC_ENT),
        KC_LEFT, KC_RGHT, KC_UP, KC_DOWN, KC_RGUI,
             KC_END , KC_HOME, KC_BSPC, LGUI_T(KC_TAB),
             KC_RCTL, RALT_T(KC_TAB), KC_PGUP, KC_PGDN
    ),

    [_WINDOWS] = LAYOUT_dactylx(
        KC_ESC , KC_1  , KC_2   , KC_3   , KC_4   , KC_5   , LT(_FNPD, KC_MPRV),       LT(_FNPD, KC_MNXT), KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , TO(0),
        KC_TAB , KC_Q  , KC_W   , KC_E   , KC_R   , KC_T   , KC_VOLU,      KC_VOLD, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSLS,
        LALT_T(KC_CAPS), KC_A  , KC_S   , KC_D   , KC_F   , KC_G   , KC_DEL,
           KC_MPLY, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z  , KC_X   , KC_C   , KC_V   , KC_B,  KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
        // bottom row / thumb cluster
        LGUI_T(KC_PSCR), KC_LBRC, KC_RBRC, KC_EQL, KC_MINS,
            /* lthumb */ LSFT_T(KC_GRV), LCTL_T(KC_BSPC) ,
            /* rthumb */ KC_SPC , LT(_NAV,KC_ENT),
        KC_LEFT, KC_RGHT, KC_UP, KC_DOWN, KC_RCTL,
             KC_END , KC_HOME, KC_BSPC, LCTL_T(KC_TAB),
             KC_RGUI, RALT_T(KC_TAB), KC_PGUP, KC_PGDN
    ),

    [_FNPD] = LAYOUT_dactylx(
        KC_TRNS, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_NLCK, KC_PEQL, KC_PSLS, KC_PAST, KC_TRNS,
        KC_TRNS, KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_P7  , KC_P8  , KC_P9  , KC_PMNS, KC_TRNS,
        KC_TRNS, KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_P4  , KC_P5  , KC_P6  , KC_PPLS, KC_TRNS,
        KC_TRNS, KC_F13 , KC_F14 , KC_F15 , KC_F16 , KC_TRNS,                        KC_TRNS, KC_P1  , KC_P2  , KC_P3  , KC_PENT, KC_TRNS,
        RESET  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT,      KC_TRNS, KC_P0  , KC_TRNS, KC_TRNS, KC_PDOT, KC_COMM, RESET  ,
                                   KC_VOLU, KC_VOLD, KC_MUTE, KC_MPLY,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_NAV] = LAYOUT_dactylx(
        KC_F11, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5, KC_TRNS,      KC_TRNS, KC_F6, KC_F7, KC_F8, KC_P9, KC_F10, KC_F12,
        KC_TRNS, KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_TRNS, KC_TRNS,      KC_TRNS, KC_P9  , KC_MPRV, KC_MPLY  , KC_MNXT  , KC_PMNS, KC_TRNS,
        KC_TRNS, KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_TRNS, KC_TRNS,      KC_TRNS, KC_P6  ,KC_HOME, KC_UP  , KC_END  ,  KC_PPLS, KC_TRNS,
        KC_TRNS, KC_F13 , KC_F14 , KC_F15 , KC_F16 , KC_TRNS,                        KC_P3  ,KC_LEFT, KC_DOWN  , KC_RGHT  ,  KC_PENT, KC_TRNS,
        RESET  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT,      KC_TRNS, KC_P0  , KC_TRNS, KC_TRNS, KC_PDOT, KC_COMM, RESET  ,
                                   KC_VOLU, KC_VOLD, KC_MUTE, KC_MPLY,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    // [_TRNS] = LAYOUT_dactylx(
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //                                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    // )
};
