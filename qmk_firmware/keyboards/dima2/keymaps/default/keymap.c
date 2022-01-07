#include QMK_KEYBOARD_H

enum layers {
	_QWERTY,
	_LOWER,
	_RAISE
};

#define RAISE_T(kc) LT(_RAISE, kc)
#define LOWER_T(kc) LT(_LOWER, kc)

#define SWT_LNG LALT(KC_LSFT)
#define SFT_TAB LSFT(KC_TAB)

// ,(?![^(\n]*\))
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_MAIN] = LAYOUT_ortho_4x12(
RGUI_T(KC_GRV)               , KC_Q         , KC_W              , KC_E             , KC_R          , KC_T             , KC_Y             , KC_U             , KC_I             , KC_O              , KC_P         , RGUI_T(KC_LBRC),
LCTL_T(KC_ESC)               , KC_A         , KC_S              , KC_D             , KC_F          , KC_G             , KC_H             , KC_J           , KC_K             , KC_L              , KC_SCLN      , RCTL_T(KC_QUOT),
KC_LALT                      , KC_Z         , KC_X              , KC_C             , KC_V          , KC_B             , KC_N             , KC_M             , KC_COMM          , KC_DOT            , KC_SLSH      , RALT_T(KC_RBRC),
																							KC_LGUI                      , SWT_LNG      , LSFT(KC_TAB)      , LT(_RAISE,KC_TAB), LSFT_T(KC_SPC), LT(_LOWER,KC_ENT), LT(_LOWER,KC_ESC), RSFT_T(KC_BSPC)  , LT(_RAISE,KC_DEL), LT(_MOUSE,KC_RSFT), SWT_LNG      , KC_BSLS
)                            ,

[_LOWER] = LAYOUT(
	_______, KC_UNDS,         KC_F1,   KC_F2, KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,          RGUI_T(KC_F12),
					 LCTL_T(KC_EQL),  KC_EXLM, KC_AT, KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, RCTL_T(KC_MINS),
					 LALT_T(KC_PPLS), KC_1,    KC_2,  KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
																						_______, _______, _______,      _______, _______, _______, _______, _______, _______, _______
),

[_RAISE] = LAYOUT(
	_______, KC_NLCK,         KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PMNS,      KC_VOLU, KC_HOME, KC_PSCR, KC_PGUP, KC_SLCK, KC_CAPS,        _______,
					 LCTL_T(KC_EQL),  KC_PAST, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,      KC_MUTE, KC_LEFT, KC_UP,   KC_RGHT, KC_INS,  RCTL_T(KC_APP),
					 _______,         KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PCMM,      KC_VOLD, KC_END,  KC_DOWN, KC_PGDN, KC_PAUS, _______,
																							_______, _______, _______,      _______, _______, _______, _______, _______, _______, _______
)

};
