#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_keycodes {
  FN = SAFE_RANGE,
  V1,
  V2,
  V3,
  V4,
  V5,
  V6,
  V7,
  V8,
  V9,
  V10,
  X1,
  X2,
  X3,
  X4,
  X5,
  MAGNET,
  R1,
  R2,
  R3,
  R4,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
	X1,	X2,	X3,	KC_F13,	KC_F14,	KC_F15,	KC_F16,	KC_F17,	KC_F18,
		KC_F19,	KC_F20,	KC_F21,	KC_F22,	KC_F23,	KC_F24,	KC_INS,	KC_HOME,KC_PGUP,
	X4,	X5,	KC_ESC,	KC_F1,	KC_F2,	KC_F3,	KC_F4,	KC_F5,	KC_F6,
		KC_F7,	KC_F8,	KC_F9,	KC_F10,	KC_F11,	KC_F12,	KC_DEL,	KC_END,	KC_PGDN,
	V1,	V2,	KC_GRV,	KC_1,	KC_2,	KC_3,	KC_4,	KC_5,	KC_6,
		KC_7,	KC_8,	KC_9,	KC_0,	KC_MINS,KC_EQL,	_______,KC_BSPC,R1,
	V3,	V4,	KC_TAB,	KC_Q,	KC_W,	KC_E,	KC_R,	KC_0, KC_T,
		KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,	KC_LBRC,KC_RBRC,KC_BSLS,R2,
	V5,	V6,	KC_CAPS,KC_A,	KC_S,	KC_D,	KC_F,	_______,KC_G,
		KC_H,	KC_J,	KC_K,	KC_L,	KC_SCLN,KC_QUOT,_______,KC_ENT,	R3,
	V7,	V8,	KC_LSFT,_______,KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,
		KC_N,	KC_M,	KC_COMM,KC_DOT,	KC_SLSH,_______,KC_RSFT,KC_UP,	R4,
	V9,	V10,	KC_LCTL,KC_LGUI,KC_LALT,FN,	_______,KC_SPC,	MAGNET,
		KC_SPC,	_______,KC_RALT,KC_RGUI,KC_RCTL,_______,KC_LEFT,KC_DOWN,KC_RGHT
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (keycode == MAGNET) {
    if (record->event.pressed) { SEND_STRING("MAGNET"); } else { SEND_STRING("NOMAGNET"); }
    return false;
  }
  if (!record->event.pressed) { return true; }
  switch (keycode) {
    case FN:
        SEND_STRING("FN"); return false;
    case V1:
        SEND_STRING("V1"); return false;
    case V2:
        SEND_STRING("V2"); return false;
    case V3:
        SEND_STRING("V3"); return false;
    case V4:
        SEND_STRING("V4"); return false;
    case V5:
        SEND_STRING("V5"); return false;
    case V6:
        SEND_STRING("V6"); return false;
    case V7:
        SEND_STRING("V7"); return false;
    case V8:
        SEND_STRING("V8"); return false;
    case V9:
        SEND_STRING("V9"); return false;
    case V10:
        SEND_STRING("V0"); return false;
    case X1:
        SEND_STRING("X1"); return false;
    case X2:
        SEND_STRING("X2"); return false;
    case X3:
        SEND_STRING("X3"); return false;
    case X4:
        SEND_STRING("X4"); return false;
    case X5:
        SEND_STRING("X5"); return false;
    case R1:
        SEND_STRING("R1"); return false;
    case R2:
        SEND_STRING("R2"); return false;
    case R3:
        SEND_STRING("R3"); return false;
    case R4:
        SEND_STRING("R4"); return false;
    }
    return true;
}

void matrix_init_user() {
   DDRD &= ~(1<<5);
   PORTD &= ~(1<<5);

   DDRB &= ~(1<<0);
   PORTB &= ~(1<<0);
}