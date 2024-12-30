#include QMK_KEYBOARD_H

#include "features/socd_cleaner.h"

socd_cleaner_t socd_v = {{KC_W, KC_S}, SOCD_CLEANER_LAST};
socd_cleaner_t socd_h = {{KC_A, KC_D}, SOCD_CLEANER_LAST};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_socd_cleaner(keycode, record, &socd_v)) { return false; }
  if (!process_socd_cleaner(keycode, record, &socd_h)) { return false; }

  return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_60_ansi_split_bs_rshift(
        KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,   KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,            KC_EQL,     KC_DEL,     KC_BSPC,
        KC_TAB,                 KC_Q,       KC_W,       KC_E,       KC_R,   KC_T,           KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,               KC_LBRC,    KC_RBRC,    KC_BSLS,
        KC_GRAVE,               KC_A,       KC_S,       KC_D,       KC_F,   KC_G,           KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,            KC_QUOT,    KC_ENT,
        KC_LSFT,                KC_Z,       KC_X,       KC_C,       KC_V,   KC_B,           KC_N,       KC_M,       KC_COMM,    KC_DOT,     RSFT_T(KC_SLSH),                KC_UP,      MO(1),
        KC_LCTL,    KC_LGUI,    KC_LALT,                                    KC_SPC,                                 KC_RALT,    KC_LEFT,                        KC_DOWN,    KC_RGHT
        ),

    LAYOUT_60_ansi_split_bs_rshift(
        QK_BOOT,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,             KC_F12,     KC_F13,     KC_F14,
        _______,                _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_INS,     KC_VOLU,    KC_PSCR,            KC_F15,     KC_F16,     KC_F17,
        _______,                _______,    KC_SCRL,    KC_PAUS,    _______,    _______,    _______,    _______,    KC_CALC,    KC_VOLD,    KC_F18,                         KC_F19,     KC_F20,
        _______,                _______,    _______,    _______,    _______,    _______,    _______,    KC_MUTE,    KC_MPRV,    KC_MNXT,    _______,            KC_PGUP,    _______,
        _______,    _______,    _______,                                        KC_MPLY,                                        A(KC_F4),   KC_HOME,            KC_PGDN,    KC_END)};