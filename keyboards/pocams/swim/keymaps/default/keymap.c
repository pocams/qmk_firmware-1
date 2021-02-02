#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _RAISE 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  RAISE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
    _______, _______,   _______,   KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18,           KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  KC_INS,  KC_HOME, KC_PGUP,
    _______, _______,   KC_ESC,    KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,            KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_END,  KC_PGDN,
    _______, _______,   KC_GRAVE,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,              KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQUAL,      KC_BSPC,    _______,
    _______, _______,   KC_TAB,     KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,   KC_RBRC,   KC_BSLS,    _______,
    _______, _______,   KC_CAPS,    KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                    KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT,       KC_ENTER,        _______,
    _______, _______,   KC_LSFT,     KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,                    KC_N,   KC_M,   KC_COMM,   KC_DOT,   KC_SLSH,   KC_RSFT,    KC_UP,      _______,
    _______, _______,   KC_LCTL,    KC_LGUI, KC_LALT,RAISE,       KC_SPC,                    KC_SPC,    RAISE,     KC_RALT,   KC_RCTL,          KC_LEFT,  KC_DOWN,    KC_RIGHT
  ),

  [_RAISE] = LAYOUT(
    _______, _______,   _______,  _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,  _______, _______, _______,
    _______, _______,   _______,  _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,  _______, _______, _______,
    _______, _______,   _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______,     _______,      _______,
    _______, _______,   _______,    _______, _______, _______, _______, _______,               _______, _______, _______, _______, _______, _______, _______,  _______,  _______,
    _______, _______,   _______,      _______, _______, _______, _______, _______,               _______, _______, _______, _______, _______, _______,     _______,      _______,
    _______, _______,   _______,        _______, _______, _______, _______, _______,               _______, _______, _______, _______, _______,     _______,    _______, _______,
    _______, _______,   _______,   _______, _______,   _______,         _______,                   _______,          _______,   _______,   _______,    _______, _______, _______
  )

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
            } else {
                layer_off(_RAISE);
            }
            return false;
    }
    return true;
}
