#include QMK_KEYBOARD_H
#include <print.h>

enum layers {
	_WIN = 0,
	_LOWER_WIN,
	_MAC,
	_LOWER_MAC,
	_SPC
};

enum keycodes {
	KC_RAISE = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_WIN] = LAYOUT_all(
		          KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,        KC_6,   KC_GRV,  KC_7,    KC_8,        KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
		          KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_PGUP, KC_ESC, KC_Y,    KC_U,        KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
		MO(_MAC), KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        KC_END, KC_HOME, KC_H,    KC_J,        KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_PGUP,
		MO(_SPC), KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_PGDN,  KC_DEL, KC_N,   KC_M,        KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN,
		          KC_LCTL,  KC_LGUI, KC_LALT, KC_RAISE, KC_LSFT, MO(_LOWER_WIN), KC_ENT, KC_SPC, KC_BSPC,  MO(_LOWER_WIN), KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
	),
	[_LOWER_WIN] = LAYOUT_all(
		         KC_TRNS,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,        KC_F6,                           KC_TRNS,  KC_F7,    KC_F8,        KC_F9,    KC_F10,    KC_TRNS, KC_TRNS,  KC_TRNS,
		         KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    LCTL(KC_PGUP), LCTL(KC_PGDN), KC_TRNS,
		KC_TRNS, KC_CAPS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,    KC_TRNS, KC_TRNS, KC_TRNS,  KC_AUDIO_VOL_UP,
		KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,   KC_AUDIO_VOL_DOWN,
		         KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK
	),
	[_MAC] = LAYOUT_all(
		         KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,   KC_TRNS,  KC_TRNS,    KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS,
		         KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
		KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,
		         KC_TRNS,  KC_LALT, KC_LGUI, KC_TRNS, KC_TRNS, MO(_LOWER_MAC), KC_TRNS, KC_TRNS, KC_TRNS,  MO(_LOWER_MAC), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),
	[_LOWER_MAC] = LAYOUT_all(
		         KC_TRNS,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,        KC_F6,                           KC_TRNS,  KC_F7,    KC_F8,        KC_F9,    KC_F10,    KC_TRNS, KC_TRNS,  KC_TRNS,
		         KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS, LGUI(LSFT(KC_LBRC)), LGUI(LSFT(KC_RBRC)), KC_TRNS,
		KC_TRNS, KC_CAPS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS, KC_TRNS, KC_LEFT,    KC_DOWN,        KC_UP,    KC_RIGHT,    KC_TRNS, KC_TRNS, KC_TRNS,  KC_AUDIO_VOL_UP,
		KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,   KC_AUDIO_VOL_DOWN,
		         KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK
	),
	[_SPC] = LAYOUT_all(
		         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS,   KC_TRNS,  KC_TRNS,    KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS,
		         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,
		         KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC, KC_SPC, KC_SPC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	)
};

static uint8_t raise_mod = 0;

bool process_raise(uint16_t kc, keyrecord_t *record) {
	if(kc == KC_RAISE) {
		if(record->event.pressed) {
			raise_mod = layer_state_is(_MAC) ? MOD_LGUI : MOD_LCTL;
			register_mods(raise_mod);
		}
		else {
			unregister_mods(raise_mod);
			raise_mod = 0;
		}
		return false;
	}

	if (raise_mod) {
		uint8_t new_mod = raise_mod;

		if(layer_state_is(_MAC)) {
			if (kc == KC_SPC ||
				kc == KC_BSPC ||
				kc == KC_LEFT ||
				kc == KC_RIGHT ||
				kc == KC_UP ||
				kc == KC_DOWN) {
				new_mod = MOD_LALT;
			}
			else {
				new_mod = MOD_LGUI;
			}
		}
		else {
			if (kc == KC_Q) {
				tap_code16(LALT(KC_F4));
				return false;
			}
			else if (kc == KC_TAB || kc == KC_SPC) {
				new_mod = MOD_LALT;
			}
			else {
				new_mod = MOD_LCTL;
			}
		}

		if (new_mod != raise_mod) {
			unregister_mods(raise_mod);
			register_mods(new_mod);
			raise_mod = new_mod;
		}
	}

	return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef CONSOLE_ENABLE
	// If console is enabled, it will print the matrix position and status of each key pressed
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif 

	if(!process_raise(keycode, record)) { return false; }

  	return true;
}
