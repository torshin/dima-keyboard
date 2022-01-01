#include QMK_KEYBOARD_H
#include "lang_shift/include.h"

enum layers {
	_MAIN,
	_MAIN_SHIFT,
	_RU,
	_RU_SHIFT,
	_RAISE,
	_LOWER,
	_THIRD,
	_GAME,
	_MOUSE,
};
enum custom_keycodes {
	LAYER_SFT_TAB = CUSTOM_SAFE_RANGE,

};

#define SWT_LNG LALT(KC_LSFT)
#define SFT_TAB LSFT(KC_TAB)

// ,(?![^(\n]*\))
const uint16_t PROGMEM
keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_MAIN] =
LAYOUT_ortho_4x12(
RGUI_T(EN_QUOT)                    , EN_Q    , EN_W         , EN_E               , EN_R              , EN_T               , EN_Y               , EN_U           , EN_I                , EN_O                , EN_P    , RGUI_T(EN_LBRC) ,
MT(CTRL_0, KC_ESC)                 , EN_A    , EN_S         , EN_D               , EN_F              , EN_G               , EN_H               , EN_J           , EN_K                , EN_L                , EN_SCLN , RCTL_T(EN_TILD) ,
ALT_0                              , EN_Z    , EN_X         , EN_C               , EN_V              , EN_B               , EN_N               , EN_M           , AG_COMM             , AG_DOT              , EN_AMPR , RALT_T(EN_RBRC) ,
SH_T(KC_LGUI)                      , SWT_LNG , LSFT(KC_TAB) , LT(_RAISE, KC_TAB) , MT(SFT_N, KC_DEL) , LT(_LOWER, KC_ENT) , LT(_LOWER, KC_ESC) , RSFT_T(KC_SPC) , LT(_RAISE, KC_BSPC) , LT(_MOUSE, KC_RSFT) , SWT_LNG , SH_T(AG_SLSH)
)                                  ,

[_MAIN_SHIFT] =
LAYOUT_ortho_4x12(
RGUI_T(AG_DQUO)                    , EN_S_Q  , EN_S_W       , EN_S_E             , EN_S_R            , EN_S_T             , EN_S_Y             , EN_S_U         , EN_S_I              , EN_S_O              , EN_S_P  , RGUI_T(EN_LCBR) ,
_______                            , EN_S_A  , EN_S_S       , EN_S_D             , EN_S_F            , EN_S_G             , EN_S_H             , EN_S_J         , EN_S_K              , EN_S_L              , EN_COLN , RCTL_T(AG_DQUO) ,
_______                            , EN_S_Z  , EN_S_X       , EN_S_C             , EN_S_V            , EN_S_B             , EN_S_N             , EN_S_M         , AG_SCLN             , AG_COLN             , AG_SLSH , RALT_T(EN_RBRC) ,
_______                            , _______ , _______      , _______            , _______           , _______            , _______            , _______        , _______             , _______             , _______ , SH_T(EN_PIPE)

)                                  ,

[_RU] =
LAYOUT_ortho_4x12(
RGUI_T(EN_QUOT)                    , RU_J    , RU_TS        , RU_U               , RU_K              , RU_JE              , RU_N               , RU_G           , RU_SH               , RU_SC               , RU_Z    , RGUI_T(RU_H)    ,
_______                            , RU_F    , RU_Y         , RU_V               , RU_A              , RU_P               , RU_R               , RU_O           , RU_L                , RU_D                , RU_ZH   , RCTL_T(RU_E)    ,
_______                            , RU_JA   , RU_CH        , RU_S               , RU_M              , RU_I               , RU_T               , RU_SF          , AG_COMM             , AG_DOT              , RU_JU   , RU_B			,
_______                            , _______ , _______      , _______            , _______           , _______            , _______            , _______        , _______             , _______             , _______ , SH_T(AG_SLSH)
)                                  ,

[_RU_SHIFT] =
		LAYOUT_ortho_4x12(
RGUI_T(AG_DQUO)                    , RU_S_J  , RU_S_TS      , RU_S_U             , RU_S_K            , RU_S_JE            , RU_S_N             , RU_S_G         , RU_S_SH             , RU_S_SC             , RU_S_Z  , RGUI_T(RU_S_H)  ,
_______                            , RU_S_F  , RU_S_Y       , RU_S_V             , RU_S_A            , RU_S_P             , RU_S_R             , RU_S_O         , RU_S_L              , RU_S_D              , RU_S_ZH , RCTL_T(RU_S_E)  ,
_______                            , RU_S_JA , RU_S_CH      , RU_S_S             , RU_S_M            , RU_S_I             , RU_S_T             , RU_S_SF        , AG_SCLN             , AG_COLN             , RU_S_JU , RU_S_B			,
_______                            , _______ , _______      , _______            , _______           , _______            , _______            , _______        , _______             , _______             , _______ , SH_T(EN_PIPE)
)                                  ,

[_LOWER] =
LAYOUT_ortho_4x12(
KC_F12                             , KC_F1   , KC_F2        , KC_F3              , KC_F4             , KC_F5              , KC_F6              , KC_F7          , KC_F8               , KC_F9               , KC_F10  , KC_F11          ,
LCTL_T(KC_EQL)                     , KC_EXLM , KC_AT        , KC_HASH            , KC_DLR            , KC_PERC            , KC_CIRC            , KC_AMPR        , KC_ASTR             , KC_LPRN             , KC_RPRN , RCTL_T(KC_MINS) ,
LALT_T(KC_PPLS)                    , KC_1    , KC_2         , KC_3               , KC_4              , KC_5               , KC_6               , KC_7           , KC_8                , KC_9                , KC_0    , KC_UNDS         ,
KC_LGUI                            , _______ , _______      , LT(_THIRD, KC_TAB) , _______           , _______            , _______            , _______        , LT(_THIRD, KC_DEL)  , _______ 			, KC_RCTL , _______
)                                  ,

[_RAISE] =
LAYOUT_ortho_4x12(
_______                            , KC_SLCK , KC_PGUP      , KC_UP              , KC_HOME           , KC_VOLU            , KC_VOLU            , KC_HOME        , KC_UP               , KC_PGUP             , KC_SLCK , _______         ,
LCTL_T(KC_APP)                     , KC_INS  , KC_LEFT      , KC_DOWN            , KC_RGHT           , KC_MPLY            , KC_MUTE            , KC_LEFT        , KC_DOWN             , KC_RGHT             , KC_INS  , RCTL_T(KC_APP)                            ,
_______                            , KC_PAUS , KC_PGDN      , KC_PSCR            , KC_END            , KC_VOLD            , KC_VOLD            , KC_END         , KC_PSCR             , KC_PGDN             , KC_PAUS , KC_MPLY         ,
_______                            , _______ , _______      , _______            , _______           , _______            , LT(_THIRD, KC_ENT) , LT(_THIRD,KC_ESC), _______ , _______      , _______            , _______
)                                  ,


[_MOUSE] =
LAYOUT_ortho_4x12(
_______                            , _______ , _______      , _______            , _______           , _______            , _______            , KC_WH_U        , KC_MS_U             , KC_WH_D             , _______ , _______         ,
_______                            , _______ , _______      , _______            , _______           , _______            , KC_WH_L            , KC_MS_L        , KC_MS_D             , KC_MS_R             , KC_WH_R , _______         ,
_______                            , _______ , _______      , _______            , _______           , _______            , _______            , KC_BTN1        , KC_BTN2             , KC_BTN3             , _______ , _______         ,
_______                            , _______ , _______      , _______            , KC_BTN1           , KC_BTN2            , _______            , _______        , _______             , _______             , _______ , _______

)                                  ,


[_THIRD] =
LAYOUT_ortho_4x12(
DEBUG                              , _______ , _______      , _______            , _______           , _______            , _______            , _______        , _______             , _______             , _______ , DEBUG           ,
RESET                              , _______ , _______      , _______            , _______           , _______            , _______            , _______        , _______             , _______             , _______ , RESET           ,
_______                            , _______ , _______      , _______            , _______           , KC_SLEP            , _______            , _______        , _______             , _______             , _______ , TG(_GAME)       ,
_______                            , _______ , RESET        , _______            , _______           , _______            , _______            , _______        , _______             , RESET               , _______ , _______

)                                  ,

[_GAME] =
LAYOUT_ortho_4x12(
KC_ESC                             , KC_1    , KC_2         , KC_3               , KC_4              , KC_5               , _______            , _______        , _______             , _______             , _______ , KC_Z            ,
KC_LSFT                            , KC_Q    , KC_W         , KC_E               , KC_R              , KC_T               , _______            , _______        , _______             , _______             , _______ , KC_NO           ,
KC_LCTL                            , KC_A    , KC_S         , KC_D               , KC_F              , KC_G               , _______            , _______        , _______             , _______             , _______ , _______         ,
KC_X                               , KC_C    , KC_LALT      , _______            , KC_SPC            , _______            , _______            , _______        , _______             , KC_NO               , _______ , _______

)};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (!lang_shift_process_record(keycode, record))
		return false;

	switch (keycode) {
		case LAYER_SFT_TAB:
			if (record->event.pressed) {
				tap_code16(SFT_TAB);

			} else {
			}
			break;
	}
	return true;
};

void user_timer(void) {
	lang_shift_user_timer();
}

void matrix_scan_user(void) {
	user_timer();
}



