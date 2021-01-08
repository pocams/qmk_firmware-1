#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _RAISE 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  RAISE,
  I3
};

/*
 *
 * standard special chars:
 * grave/tilde  hyphen/underscore  equals/plus
 * left bracket/curly right bracket/curly  backslash/pipe
 * semicolon/colon  quote/double quote
 * comma/less than  period/greater than  slash/question mark
 *
 *
 * special keys:
 * esc f1-f12 prtsc break
 * bksp ins home pgup
 * tab del end pgdn
 * enter
 * shift uparrow
 * ctrl win alt menu leftarrow downarrow rightarrow
 *
 *
 * available nonletter/number keys: 20
 *
 *
 * useful keys:
 * go to desktop, send to desktop
 *
 * to add:
 * leader key
 * mod tap?
 * chording?
 * tap dance?
 *
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    I3,               I3,      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SFTENT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, RAISE,   KC_SPC,                    KC_SPC,  RAISE,   KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                              _______, _______, _______, KC_INS,  KC_HOME, KC_PGUP,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                             _______, _______, KC_UP,   KC_DEL,  KC_END,  KC_PGDN,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_TILDE, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR,                            _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_GRV,  KC_MINS, KC_EQUAL, KC_LBRC, KC_RBRC, _______,          _______, _______, _______,  _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

};

static bool i3_key_pressed = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
            } else {
                layer_off(_RAISE);
            }
            return false;
        case I3:
            if (record->event.pressed) {
                i3_key_pressed = false;
                // ctrl-alt-shift-gui - send to desktop
                register_code(KC_LCTRL);
                register_code(KC_LALT);
                register_code(KC_LSHIFT);
                register_code(KC_LGUI);
            } else {
                unregister_code(KC_LCTRL);
                unregister_code(KC_LALT);
                unregister_code(KC_LSHIFT);
                unregister_code(KC_LGUI);
                // Was a key pressed while the modifier was being held?
                if (i3_key_pressed) {
                    // Yup, so don't do anything
                } else {
                    // Nope, activate 'go to desktop' mode.  ctrl-alt-gui - go to desktop
                    set_oneshot_mods(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LGUI));
                }
            }
            return false;
        default:
            i3_key_pressed = true;
    }
    return true;
}
