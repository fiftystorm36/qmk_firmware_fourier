#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1
#define _FN2 2
#define _FN2 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

#define KC_FN1 MO(_FN1)
#define KC_FN2 MO(_FN2)
#define KC_FN3 MO(_FN3)

#define LG1LGUI LGUI(KC_LANGUAGE_1)
#define LG2RGUI RGUI(KC_LANGUAGE_2)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS, KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LALT, lG1LGUI, KC_SPACE,KC_FN1,             KC_FN2,  KC_SPACE,LG2RGUI, KC_RALT, KC_RCTL, KC_FN3
  ),

  [_FN1] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TILD, _______,
    KC_LCAP, _______, KC_LEFT, KC_UP. , KC_DOWN, KC_RIGHT,  KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_RBRC, KC_QUOT,
    KC_LSFT, _______, _______, _______, _______, _______,   KC_PIPE, KC_GRV,  KC_LCBR, KC_RCBR, KC_BSLS, KC_DQUOT,
    KC_LCTL, KC_LALT, lG1LGUI, KC_SPACE,_______,            _______, KC_SPACE,LG2RGUI, KC_RALT, KC_RCTL, _______
  ),

  [_FN2] = LAYOUT(
    KC_ESC,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, _______,
    KC_LCAP, _______, KC_LEFT, KC_UP. , KC_DOWN, KC_RIGHT,  KC_EQL , KC_PLUS, KC_MINS, KC_LBRC, KC_RBRC, KC_QUOT,
    KC_LSFT, KC_HOME, KC_PGUP, KC_PGDN, KC_END,  _______,   KC_PIPE, KC_GRV,  KC_LCBR, KC_RCBR, KC_BSLS, KC_DQUOT,
    KC_LCTL, KC_LALT, lG1LGUI, KC_SPACE,_______,            _______, KC_SPACE,LG2RGUI, KC_RALT, KC_RCTL, _______
  ),
  
  [_FN3] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_UP,   KC_F11,  KC_DEL,
    KC_LCAP, KC_F10,  KC_F11,  KC_F12,  _______, _______,   _______, _______, _______, KC_LEFT, KC_RIGHT,_______,
    KC_LSFT, _______, _______, _______, _______, _______,   _______, _______, _______, _______, KC_DOWN, KC_RSFT,
    KC_LCTL, KC_LALT, lG1LGUI, KC_SPACE,_______,            _______, KC_SPACE,LG2RGUI, KC_RALT, KC_RCTL, _______
  )

};
