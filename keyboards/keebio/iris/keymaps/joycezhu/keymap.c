#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LCTL, TO(2), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, TO(1), KC_LGUI, KC_BSPC, KC_SPC, KC_TRNS, RALT_T(KC_EQL)),
  [1] = LAYOUT(KC_TILD, KC_PSLS, KC_PAST, KC_PMNS, KC_DLR, KC_PERC, KC_INS, KC_HOME, KC_PGUP, KC_MINS, KC_EQL, KC_PGUP, RESET, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_5, KC_DEL, KC_END, KC_PGDN, KC_LBRC, KC_RBRC, KC_PGDN, KC_ESC, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_LBRC, KC_VOLD, KC_UP, KC_VOLU, KC_P6, KC_PLUS, KC_HOME, KC_PSCR, KC_P1, KC_P2, KC_P3, KC_0, TO(2), KC_LCTL, KC_MUTE, KC_LEFT, KC_DOWN, KC_RGHT, KC_P3, KC_MINS, KC_END, TO(0), KC_LGUI, KC_BSPC, KC_SPC, KC_RCTL, KC_TRNS),
  [2] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_PSLS, KC_PAST, KC_PMNS, KC_BRIU, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_7, KC_8, KC_9, KC_PPLS, KC_BRID, KC_MPRV, KC_MNXT, KC_VOLU, KC_PGUP, KC_MAIL, KC_TRNS, KC_HOME, KC_4, KC_5, KC_6, KC_PEQL, KC_MUTE, KC_MSTP, KC_MPLY, KC_VOLD, KC_PGDN, KC_TRNS, KC_WBAK, KC_TRNS, KC_WREF, KC_END, KC_1, KC_2, KC_3, KC_PENT, KC_MPRV, KC_MNXT, KC_WFWD, KC_MSEL, TO(0), TO(1)),
  [3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
}
