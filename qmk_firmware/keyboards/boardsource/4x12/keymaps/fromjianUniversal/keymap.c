#include QMK_KEYBOARD_H

enum layers {
    _MAIN,
    _RUS,
    _RAISE,
    _LOWER,
    _RUS_LOWER,
    _MAIN_THIRD,
    _RUS_THIRD,
    _MENU,
    _GAME,
    _MOUSE,
};

enum custom_keycodes {
    SWITCH_LAYER = SAFE_RANGE,
};

// ,(?![^(\n]*\))
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_MAIN] = LAYOUT_ortho_4x12(
LT(_MAIN_THIRD,KC_GRV)        , KC_Q         , KC_W        , KC_E             , KC_R          , KC_T             , KC_Y             , KC_U             , KC_I             , KC_O              , KC_P        , LT(_MAIN_THIRD,KC_LBRC),
KC_LCTL                      , KC_A         , KC_S        , KC_D             , SH_T(KC_F)    , KC_G             , KC_H             , SH_T(KC_J)       , KC_K             , KC_L              , KC_SCLN     , RCTL_T(KC_QUOT),
KC_LALT                      , KC_Z         , KC_X        , KC_C             , KC_V          , KC_B             , KC_N             , KC_M             , KC_COMM          , KC_DOT            , KC_SLSH     , RALT_T(KC_RBRC),
SH_T(KC_LGUI)                , LALT(KC_LSFT), LSFT(KC_TAB), LT(_RAISE,KC_TAB), LSFT_T(KC_SPC), LT(_LOWER,KC_ENT), LT(_LOWER,KC_ESC), RSFT_T(KC_BSPC)  , LT(_RAISE,KC_DEL), LT(_MOUSE,KC_RSFT), SWITCH_LAYER, SH_T(KC_BSLS)
)
                             ,
[_RUS] = LAYOUT_ortho_4x12(
LT(_RUS_THIRD,  KC_GRV)		 , RU_SHTI      , RU_TSE      , RU_U             , RU_KA         , RU_IE            	, RU_EN            		, RU_GHE           , RU_SHA           , RU_SHCH           , RU_ZE       , LT(_RUS_THIRD,RU_HA)  ,
_______                      , RU_EF        , RU_YERU     , RU_VE            , RU_A          , RU_PE            	, RU_ER            		, RU_O             , RU_EL            , RU_DE             , RU_ZHE      , RCTL_T(RU_E)   ,
_______                      , RU_YA        , RU_CHE      , RU_ES            , RU_EM         , RU_I             	, RU_TE            		, RU_SOFT          , RU_COMM          , RU_DOT     		 , RU_BE       , RALT_T(RU_YU),
_______                      , _______      , _______     , _______          , _______       , LT(_RUS_LOWER,KC_ENT), LT(_RUS_LOWER,KC_ESC) , _______          , _______          , _______           , _______     , _______
)                            ,

[_LOWER] = LAYOUT_ortho_4x12(
KC_F12                       , KC_F1        , KC_F2       , KC_F3            , KC_F4         , KC_F5            , KC_F6            , KC_F7            , KC_F8            , KC_F9             , KC_F10      , KC_F11         ,
LCTL_T(KC_EQL)               , KC_EXLM      , KC_AT       , KC_HASH          , KC_DLR        , KC_PERC          , KC_CIRC          , KC_QUES          , KC_ASTR          , KC_LPRN           , KC_RPRN     , RCTL_T(KC_MINS),
LALT_T(KC_PPLS)              , KC_1         , KC_2        , KC_3             , KC_4          , KC_5             , KC_6             , KC_7             , KC_8             , KC_9              , KC_0        , KC_UNDS        ,
_______                      , _______      , _______     , LT(_THIRD,KC_TAB), _______       , _______          , _______          , _______          , LT(_THIRD,KC_DEL), _______           , KC_RCTL     , _______


)                            ,

[_RUS_LOWER] = LAYOUT_ortho_4x12(
_______                      , _______      , _______     , _______          , _______       , _______          , _______      	   , _______          , _______          , _______           , _______     , _______        ,
_______                      , _______      , KC_AT       , KC_HASH          , KC_DLR        , _______          , KC_CIRC          , RU_QUES          , _______          , _______           , _______     , _______		,
_______                      , _______      , _______     , _______          , _______       , _______          , _______      	   , _______          , _______          , _______           , _______     , _______        ,
_______                      , _______      , _______     , _______          , _______       , _______          , _______          , _______          , _______          , _______           , _______     , _______
),

[_RUS_THIRD] = LAYOUT_ortho_4x12(
_______                      , _______      , _______     , _______          , _______       , RU_YO        	, _______      	   , _______          , _______          , _______           , _______     , _______        ,
_______                      , _______      , _______     , _______          , _______       , _______          , _______      	   , _______          , _______          , _______           , _______     , _______		,
_______                      , _______      , _______     , _______          , _______       , _______          , _______      	   , _______          , _______          , _______           , _______     , _______        ,
_______                      , _______      , _______     , _______          , _______       , _______          , _______          , RU_HARD          , _______          , _______           , _______     , _______
)                            ,

[_MAIN_THIRD] = LAYOUT_ortho_4x12(
_______                      , _______      , _______     , _______          , _______       , _______          , _______      	   , _______          , _______          , _______           , _______     , _______        ,
_______                      , _______      , _______     , _______          , _______       , _______          , _______      	   , _______          , _______          , _______           , _______     , _______		,
_______                      , _______      , _______     , _______          , _______       , _______          , _______      	   , _______          , _______          , _______           , _______     , _______        ,
_______                      , _______      , _______     , _______          , _______       , _______          , _______          , _______          , KC_LABK          , KC_RABK           , _______     , _______
)                            ,

[_RAISE] = LAYOUT_ortho_4x12(
KC_CALC                      , KC_PSLS      , KC_P7       , KC_P8            , KC_P9         , KC_PMNS          , KC_VOLU          , KC_HOME          , KC_UP            , KC_PGUP           , KC_SLCK     , KC_CAPS        ,
LCTL_T(KC_EQL)               , KC_PAST      , KC_P4       , KC_P5            , KC_P6         , KC_PPLS          , KC_MUTE          , KC_LEFT          , KC_DOWN          , KC_RGHT           , KC_INS      , RCTL_T(KC_APP) ,
_______                      , KC_P0        , KC_P1       , KC_P2            , KC_P3         , KC_PDOT          , KC_VOLD          , KC_END           , KC_PSCR          , KC_PGDN           , KC_PAUS     , KC_MPLY        ,
_______                      , _______      , _______     , _______          , _______       , _______          , LT(_MENU,KC_ENT) , LT(_MENU,KC_ESC) , _______          , _______           , _______     , _______


)                            ,


[_MOUSE] = LAYOUT_ortho_4x12(
_______                      , _______      , _______     , _______          , _______       , _______          , _______          , KC_WH_U          , KC_MS_U          , KC_WH_D           , _______     , _______        ,
_______                      , _______      , _______     , _______          , _______       , _______          , KC_WH_L          , KC_MS_L          , KC_MS_D          , KC_MS_R           , KC_WH_R     , _______        ,
_______                      , _______      , _______     , _______          , _______       , _______          , _______          , KC_BTN1          , KC_BTN2          , KC_BTN3           , _______     , _______        ,
_______                      , _______      , _______     , _______          , KC_BTN1       , KC_BTN2          , _______          , _______          , _______          , _______           , _______     , _______

)                            ,


[_MENU] = LAYOUT_ortho_4x12(
DEBUG                        , _______      , _______     , _______          , _______       , _______          , _______          , _______          , _______          , _______           , _______     , DEBUG          ,
RESET                        , _______      , _______     , _______          , _______       , _______          , _______          , _______          , _______          , _______           , _______     , RESET          ,
_______                      , _______      , _______     , _______          , _______       , KC_SLEP          , _______          , _______          , _______          , _______           , _______     , TG(_GAME)      ,
_______                      , _______      , RESET       , _______          , _______       , _______          , _______          , _______          , _______          , RESET             , _______     , _______

)                            ,

[_GAME] = LAYOUT_ortho_4x12(
KC_ESC                       , KC_1         , KC_2        , KC_3             , KC_4          , KC_5             , _______          , _______          , _______          , _______           , _______     , KC_Z           ,
KC_LSFT                      , KC_Q         , KC_W        , KC_E             , KC_R          , KC_T             , _______          , _______          , _______          , _______           , _______     , KC_NO          ,
KC_LCTL                      , KC_A         , KC_S        , KC_D             , KC_F          , KC_G             , _______          , _______          , _______          , _______           , _______     , _______        ,
KC_X                         , KC_C         , KC_LALT     , _______          , KC_SPC        , _______          , _______          , _______          , _______          , KC_NO             , _______     , _______

)};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
		case SWITCH_LAYER:
			if (record->event.pressed) {
				tap_code16(LALT(KC_LSFT));
				layer_invert(_RUS);
			} else {
			}
			break;
    }
    return true;
};

