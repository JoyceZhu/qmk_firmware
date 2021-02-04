#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

#define EISU LALT(KC_GRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(RESET, KC_1, KC_2, KC_3, KC_4, KC_5, KC_LBRC, KC_RBRC, KC_6, KC_7, KC_8, KC_9, KC_0, KC_PSCR, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_MINS, KC_VOLU, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, LALT_T(KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_TAB, KC_VOLD, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, LT(2,KC_V), KC_B, LCTL_T(KC_DEL), RGUI_T(KC_ENT), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_ESC, TT(1), LALT_T(KC_QUOT), LSFT_T(KC_MPLY), LGUI_T(KC_GRV), LCTL_T(KC_DEL), KC_BSPC, KC_SPC, RGUI_T(KC_ENT), RSFT_T(KC_EQL), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
  [1] = LAYOUT(KC_F11, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_LCBR, KC_RCBR, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_F10, KC_F12, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_BRIU, KC_MPRV, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_RPRN, KC_PIPE, KC_MUTE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_BRID, KC_MNXT, KC_P4, KC_P5, KC_P6, KC_PCMM, KC_COLN, KC_DQUO, KC_LSFT, KC_SLEP, KC_CALC, KC_MAIL, KC_MSEL, KC_0, KC_SPC, KC_ENT, KC_P1, KC_P2, KC_P3, KC_PEQL, KC_QUES, KC_RSFT, KC_LCTL, TT(0), KC_LALT, LALT(KC_GRV), KC_TRNS, KC_SPC, KC_DEL, KC_BSPC, KC_ENT, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END),
  [2] = LAYOUT(KC_F11, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_LCBR, KC_RCBR, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F12, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_UNDS, KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_DEL, KC_BSPC, KC_H, KC_J, KC_K, KC_L, KC_COLN, KC_DQUO, KC_LSFT, KC_6, KC_7, KC_8, KC_9, KC_0, KC_SPC, KC_ENT, KC_N, KC_M, KC_LT, KC_GT, KC_QUES, KC_RSFT, KC_LCTL, KC_LGUI, KC_LALT, LALT(KC_GRV), MO(3), KC_SPC, KC_DEL, KC_BSPC, KC_ENT, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END),
  [3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET, RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, KC_TRNS, KC_TRNS, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BL_TOGG, BL_BRTG, BL_INC, BL_DEC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};


#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
         print("mode just switched to qwerty and this is a huge string\n");
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
