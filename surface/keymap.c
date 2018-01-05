#include "atom47.h" //I have no idea if this is best practice but MK_KEYBOARD_H caused an error

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define _MA 0 //Main layer
#define _PN 2 //Fn
#define _FN1 3 //Fn1
#define _FN 4 //Pn

//These layers add an arrow keys cluster to alt, menu, ctrl, and shift
//Theoritically this will be toggleable from win+lAlt+rSpace

#define _Arrows 1 //Main layer w/ arrows



#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Main Layer
   * ,----------------------------------------------------.
   * |ESC| Q | W | E | R | T | Y | U | I | O | P |DEL|BSP|
   * |---------------------------------------------------|
   * |TAB | A | S | D | F | G | H | J | K | L | ; |   ENT|
   * |---------------------------------------------------|
   * |lShft| Z | X | C | V | B | N | M | < | > |rShft|Fn1|
   * |---------------------------------------------------|
   * |lCtrl|Win|lAlt|Fn|lSpace| rSpace |Pn|rAlt|Men|rCtrl|
   * `---------------------------------------------------'
 */

[_MA] = KEYMAP_ANSI(
  KC_ESC,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_DEL,   KC_BSPC,  \
  KC_TAB,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,        KC_ENT,   \
  KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_RSFT,        MO(_FN1), \
  KC_LCTL,    KC_LGUI,  KC_LALT,  MO(_FN),  0xaf,         KC_SPC,         MO(_PN),  KC_RALT,  KC_APP,         KC_RCTRL),  \
 

  /* FN Layer
   * ,------------------------------------------------------------------------------------------.
   * |______| vol- | vol+ | mute | reset|______| Calc | PgUp |  Up  |PgDown|PRINTS|SCRLCK|PAUSE |
   * |------------------------------------------------------------------------------------------|
   * |  Caps  |RWind | Pause|FFowrd|______|______| Home | Left | Down | Right|Insert|___________|
   * |------------------------------------------------------------------------------------------|
   * |______|______|______|______|______|______|______|______|______|______|______|______|______|
   * |------------------------------------------------------------------------------------------|
   * |______|______|______|______|______|______|______|______|______|______|______|______|______|
   * `------------------------------------------------------------------------------------------'
 */

[_FN] = KEYMAP_ANSI(
  _______,    KC_VOLD,  KC_VOLU,  KC_MUTE,  RESET,    _______,  KC_CALC,  KC_PGUP,  KC_UP,    KC_PGDN,  KC_PSCR,  KC_SLCK,  KC_PAUS,  \
  KC_CAPS,    KC_MPRV,  KC_MPLY,  KC_MNXT,  _______,  _______,  KC_HOME,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_INS,         _______,  \
  _______,    _______,  _______,  _______,  _______,  _______,  _______,  BL_TOGG,  BL_DEC,   BL_INC,   _______,        _______,  \
  _______,    _______,  _______,  _______,  _______,        _______,        _______,  _______,  _______,        _______), \
 
 /* FN1 Layer
   * ,----------------------------------------------------.
   * | ` | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|
   * |---------------------------------------------------|
   * |  1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - |   =  |
   * |---------------------------------------------------|
   * |_____|___|___|___|___| ' | / | [ | ] | \ |rShft|___|
   * |---------------------------------------------------|
   * |_____|___|____|__|______|________|__|____|___|_____|
   * `---------------------------------------------------'
 */


[_FN1] = KEYMAP_ANSI(
  KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   \
  KC_1,     KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,        KC_EQL,   \
  _______,    _______,  _______,  _______,  _______,  KC_QUOT,  KC_SLSH,  KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_RSFT,        _______,  \
  _______,    _______,  _______,  _______,  _______,        _______,        _______,  _______,  _______,        _______), \
 
[_PN] = KEYMAP_ANSI(
  TO(_Arrows),    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  \
  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,        _______,  \
  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,        _______,  \
  _______,    _______,  _______,  _______,  _______,        _______,        _______,  _______,  _______,        RESET),




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////Arrows Layer Begins///////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


  /* Main Layer
   * ,----------------------------------------------------.
   * |ESC| Q | W | E | R | T | Y | U | I | O | P |DEL|BSP|
   * |---------------------------------------------------|
   * |TAB | A | S | D | F | G | H | J | K | L | ; |   ENT|
   * |---------------------------------------------------|
   * |lShft| Z | X | C | V | B | N | M | < | > | Up  |Fn1|
   * |---------------------------------------------------|
   * |lCtrl|Win|lAlt|Fn|lSpace| rSpace |Pn|Right|Dwn|left|
   * `---------------------------------------------------'
 */

[_Arrows] = KEYMAP_ANSI(
  KC_ESC,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_DEL,   KC_BSPC,  \
  KC_TAB,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,        KC_ENT,   \
  KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_UP,        MO(_FN1), \
  KC_LCTL,    KC_LGUI,  KC_LALT,  MO(_FN),  0xaf,         KC_SPC,         MO(_PN),  KC_LEFT,  KC_DOWN,         KC_RIGHT),  \




};




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////Custom macro begins///////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

enum custom_keycodes {
    RIGHT_SPACEBAR = 0xaf
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case RIGHT_SPACEBAR:
                SEND_STRING("QMK is the best thing ever!");
                return false; break;
        }
    }
    return true;
};
QMK is the best thing ever!QMK is the best thing ever!