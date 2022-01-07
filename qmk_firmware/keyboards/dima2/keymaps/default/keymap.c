#include QMK_KEYBOARD_H

enum layers {
	_MAIN,
	_LOWER,
	_RAISE,
	_MOUSE,
	_THIRD,
};

#define RAISE_T(kc) LT(_RAISE, kc)
#define LOWER_T(kc) LT(_LOWER, kc)

#define SWT_LNG LALT(KC_LSFT)
#define SFT_TAB LSFT(KC_TAB)

// ,(?![^(\n]*\))
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_MAIN] = LAYOUT(
RGUI_T(KC_GRV)     , KC_Q         , KC_W              , KC_E           , KC_R               , KC_T                                                                                    , KC_Y               , KC_U                , KC_I    , KC_O    , KC_P    , RGUI_T(KC_LBRC) ,
LCTL_T(KC_ESC)     , KC_A         , KC_S              , KC_D           , KC_F               , KC_G                                                                                    , KC_H               , KC_J                , KC_K    , KC_L    , KC_SCLN , RCTL_T(KC_QUOT) ,
KC_LALT            , KC_Z         , KC_X              , KC_C           , KC_V               , KC_B              , SWT_LNG                                           , SWT_LNG         , KC_N               , KC_M                , KC_COMM , KC_DOT  , KC_SLSH , RALT_T(KC_RBRC) ,
																												KC_LGUI        , LSFT(KC_TAB) , LT(_RAISE,KC_TAB) , LSFT_T(KC_SPC) , LT(_LOWER, KC_DEL) , LT(_LOWER,KC_ESC) , RSFT_T(KC_BSPC) , LT(_RAISE, KC_ENT) , LT(_MOUSE, KC_RSFT) , KC_BSLS
)                  ,

[_LOWER] = LAYOUT(
KC_F12             , KC_F1        , KC_F2             , KC_F3          , KC_F4              , KC_F5                                                                                       , KC_F6           , KC_F7              , KC_F8               , KC_F9   , KC_F10  , KC_F11          ,
LCTL_T(KC_PPLS)    , KC_EXLM      , KC_AT             , KC_HASH        , KC_DLR             , KC_PERC                                                                                     , KC_CIRC         , KC_AMPR            , KC_ASTR             , KC_LPRN , KC_RPRN , KC_UNDS ,
LALT_T(KC_EQL)     , KC_1         , KC_2              , KC_3           , KC_4               , KC_5            , _______                                                 , _______         , KC_6            , KC_7               , KC_8                , KC_9    , KC_0    , RALT_T(KC_MINS) ,
																												_______        , _______          , LT(_THIRD,KC_TAB) , _______    , _______            , _______           , _______         , _______         , _______            , _______
)                  ,

[_RAISE] = LAYOUT(
_______            , KC_SLCK      , KC_PGUP           , (KC_UP)         , LCTL(KC_HOME)      , KC_VOLU                                                                                    ,RALT(KC_T)      , KC_HOME         , KC_UP             , KC_PGUP            , KC_SLCK , _______       ,
LCTL_T(KC_APP)     , KC_INS       , LCTL(KC_LEFT)     , (KC_DOWN)       , LCTL(KC_RGHT)      , KC_MPLY                                                                                    ,KC_MUTE         , KC_LEFT         , KC_DOWN           , KC_RGHT            , KC_INS  , RCTL_T(KC_APP),
_______            , KC_PAUS      , KC_PGDN           , KC_PSCR         , LCTL(KC_END)       , KC_VOLD          , _______                                                 , _______       ,RALT(KC_M)      , KC_END          , KC_PSCR           , KC_PGDN            , KC_PAUS , _______       ,
																												_______         , _______            , _______          , _______  , LT(_THIRD,KC_DEL)  , LT(_THIRD,KC_ESC) , _______         , _______            , _______         , _______

)                  ,


[_MOUSE] = LAYOUT(
RALT(KC_GRV)       , _______      , _______           , _______        , _______            , RALT(KC_T)                                                                                  , KC_WH_U         , KC_BTN1        , KC_MS_U             , KC_BTN2      , _______       , RALT(KC_LBRC),
_______            , _______      , _______           , _______        , _______            , _______                                                                                     , KC_WH_D         , KC_MS_L        , KC_MS_D             , KC_MS_R      , _______       , RALT(KC_QUOT),
_______            , _______      , _______           , _______        , _______            , _______     , _______                                                 , _______             , _______         , RALT(KC_M)     , RALT(KC_COMM)       , RALT(KC_DOT) , RALT(KC_SLSH) , RALT(KC_RBRC),
																												_______      , _______           , _______        , KC_BTN1            , KC_BTN2           , _______        , _______             , _______         , _______        , RALT(KC_BSLS)

)                  ,


[_THIRD] = LAYOUT(
DEBUG              , _______      , _______           , _______        , _______            , _______                                                                                      , _______       , _______            , _______             , _______ , _______ , DEBUG           ,
RESET              , _______      , _______           , _______        , _______            , _______                                                                                      , _______       , _______            , _______             , _______ , _______ , RESET           ,
_______            , _______      , _______           , _______        , _______            , KC_SLEP         , _______                                               , _______          , _______       , _______            , _______             , _______ , _______ , _______         ,
																											_______          , RESET            , _______           , _______        , _______            , _______           , _______        , RESET         , _______            , _______

)                  ,


};
