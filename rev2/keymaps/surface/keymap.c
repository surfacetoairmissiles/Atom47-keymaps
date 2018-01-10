#include "atom47.h" //I have no idea if this is best practice but MK_KEYBOARD_H caused an error
#include "led.h" //I don't think this is ever actually invoked, but It doesn't hurt
#include "rgblight.h"
#include "quantum.h" 



// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define _MA 0 //Main layer
#define _L1 1
#define _L2 2
#define _L3 3

#define _PN 11 //Fn
#define _FN1 12 //Fn1
#define _FN 13 //Pn

//These layers add an arrow keys cluster to alt, menu, ctrl, and shift
//Theoritically this will be toggleable from win+lAlt+rSpace

#define _Arrows 10 //Main layer w/ arrows


//These are the modifier keys i use in macros
#define MODS_SHIFT_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
#define MODS_CTRL_MASK  (MOD_BIT(KC_LCTL)|MOD_BIT(KC_RCTRL))
#define MODS_ALT_MASK  (MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

enum custom_keycodes {
    Layer_Switcher0 = SAFE_RANGE,
    Layer_Switcher1,
    Layer_Switcher2,
    Layer_Switcher3
};

#define _____ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Main Layer
   * ,-----------------------------------------------------------------------------.
   * | ESC |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  | DEL | BSP |
   * |-----------------------------------------------------------------------------|
   * |  TAB |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |    ENTER |
   * |-----------------------------------------------------------------------------|
   * |  lShft |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  <  |  >  |  rShft | Fn1 |
   * |-----------------------------------------------------------------------------|
   * | lCtrl| Win | Alt |  Fn |   Space   |     Space     |  Alt | Men | PN | rCtrl|
   * `-----------------------------------------------------------------------------'
 */
//This is your main layer
[_MA] = KEYMAP_ANSI(
  KC_ESC,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_DEL,   KC_BSPC,  \
  KC_TAB,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,        KC_ENT,   \
  KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_RSFT,        MO(_FN1), \
  KC_LCTL,    KC_LGUI,  KC_LALT,  MO(_FN),  KC_SPC,         KC_SPC,      KC_RALT,  KC_APP,  MO(_PN),         KC_RCTRL),  \
 

  /* Layer 1
   * ,-----------------------------------------------------------------------------.
   * | ESC |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  | DEL | BSP |
   * |-----------------------------------------------------------------------------|
   * |  TAB |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |    ENTER |
   * |-----------------------------------------------------------------------------|
   * |  lShft |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  <  |  >  |  rShft | Fn1 |
   * |-----------------------------------------------------------------------------|
   * | lCtrl| Win | Alt |  Fn |   Space   |     Space     |  Alt | Men | PN | rCtrl|
   * `-----------------------------------------------------------------------------'
 */
//This is layer 1 it should have a red led when active
//I don't actually use these mutch so rebind how you like


[_L1] = KEYMAP_ANSI(
  KC_ESC,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_DEL,   KC_BSPC,  \
  KC_TAB,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,        KC_ENT,   \
  KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_RSFT,        MO(_FN1), \
  KC_LCTL,    KC_LGUI,  KC_LALT,  MO(_FN),  KC_SPC,         KC_SPC,      KC_RALT,  KC_APP,  MO(_PN),         KC_RCTRL),  \
 
  /* Layer 2
   * ,-----------------------------------------------------------------------------.
   * | ESC |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  | DEL | BSP |
   * |-----------------------------------------------------------------------------|
   * |  TAB |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |    ENTER |
   * |-----------------------------------------------------------------------------|
   * |  lShft |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  <  |  >  |  rShft | Fn1 |
   * |-----------------------------------------------------------------------------|
   * | lCtrl| Win | Alt |  Fn |   Space   |     Space     |  Alt | Men | PN | rCtrl|
   * `-----------------------------------------------------------------------------'
 */
//This is layer 2 it should have a red led when active
//I don't actually use these mutch so rebind how you like

[_L2] = KEYMAP_ANSI(
  KC_ESC,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_DEL,   KC_BSPC,  \
  KC_TAB,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,        KC_ENT,   \
  KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_RSFT,        MO(_FN1), \
  KC_LCTL,    KC_LGUI,  KC_LALT,  MO(_FN),  KC_SPC,         KC_SPC,      KC_RALT,  KC_APP,  MO(_PN),         KC_RCTRL),  \
 
  /* Layer 3
   * ,-----------------------------------------------------------------------------.
   * | ESC |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  | DEL | BSP |
   * |-----------------------------------------------------------------------------|
   * |  TAB  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |    ENTER |
   * |-----------------------------------------------------------------------------|
   * |  lShft |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  <  |  >  |  rShft | Fn1 |
   * |-----------------------------------------------------------------------------|
   * | lCtrl| Win | Alt |  Fn |   Space   |     Space     |  Alt | Men | PN | rCtrl|
   * `-----------------------------------------------------------------------------'
 */
//This is layer 3 it should have a green led when active
//I don't actually use these mutch so rebind how you like

[_L3] = KEYMAP_ANSI(
  KC_ESC,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_DEL,   KC_BSPC,  \
  KC_TAB,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,        KC_ENT,   \
  KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_RSFT,        MO(_FN1), \
  KC_LCTL,    KC_LGUI,  KC_LALT,  MO(_FN),  KC_SPC,         KC_SPC,      KC_RALT,  KC_APP,  MO(_PN),         KC_RCTRL),  \
 


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////Function Layers///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//These are the main function layers assosciated with the fn, fn1 and pn layers. They currently mimic stock.
//Be a touch more carefull when rebinding these as you can remove the layer switcher keys and have to reset your board

  /* FN Layer
   * ,-----------------------------------------------------------------------------.
   * |_____| vol-| vol+| mute|reset|_____| Calc| PgUp|  Up |PgDwn|PRNTS|SCRLK|PAUSE|
   * |-----------------------------------------------------------------------------|
   * | TAB  |RWind|Pause|FFwrd|_____|_____| Home| Left| Down|Right|Insrt|__________|
   * |-----------------------------------------------------------------------------|
   * |_________|_____|_____|_____|_____|_____|_____|_____|_____|_____|_______|_____|
   * |-----------------------------------------------------------------------------|
   * |______|_____|_____|_____|__________|________________|_____|_____|_____|______|
   * `-----------------------------------------------------------------------------'
 */
//This is the FN layer (Blue on default keycaps) it contains all of the special function keys as well as the arrow keys and layer switching keys
[_FN] = KEYMAP_ANSI(
  _____,    KC_VOLD,  KC_VOLU,  KC_MUTE,  RESET,    _____,  KC_CALC,  KC_PGUP,  KC_UP,    KC_PGDN,  KC_PSCR,  KC_SLCK,  KC_PAUS,  \
  KC_CAPS,    KC_MPRV,  KC_MPLY,  KC_MNXT,  _____,  _____,  KC_HOME,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_INS,         _____,  \
  _____,    _____,  _____,  _____,  _____,  _____,  _____,  Layer_Switcher0,  Layer_Switcher1,   Layer_Switcher2,   Layer_Switcher3,        _____,  \
  _____,    _____,  _____,  _____,  _____,        _____,        _____,  _____,  _____,        _____), \
 
 /* FN1 Layer
   * ,-----------------------------------------------------------------------------.
   * |  `  |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |
   * |-----------------------------------------------------------------------------|
   * |   1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |    =     |
   * |-----------------------------------------------------------------------------|
   * |________|_____|_____|_____|_____|  '  |  /  |  [  |  ]  |   \  | rShft |_____|
   * |-----------------------------------------------------------------------------|
   * |______|_____|_____|_____|__________|________________|_____|_____|_____|______|
   * `-----------------------------------------------------------------------------'
 */
//This is the FN1 Layer (Red on the default keycaps) it contains numbers and the fn key as well as others.
//The rShift key is bound in this layer so that if the arrowlayer is enabled you can still reach the 3rd layer (green) keycaps
//This was a problem in the original core pcb, however if you rebind rshift to somewhere else on the main layer you may want to remove this

[_FN1] = KEYMAP_ANSI(
  KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   \
  KC_1,     KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,        KC_EQL,   \
  _____,    _____,  _____,  _____,  _____,  KC_QUOT,  KC_SLSH,  KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_RSFT,        _____,  \
  _____,    _____,  _____,  _____,  _____,        _____,        _____,  _____,  _____,        _____), \
 
  /* PN Layer
   * ,-----------------------------------------------------------------------------.
   * |_____| vol-| vol+| mute|reset|_____| Calc| PgUp|  Up |PgDwn|PRNTS|SCRLK|PAUSE|
   * |-----------------------------------------------------------------------------|
   * | TAB  |RWind|Pause|FFwrd|_____|_____| Home| Left| Down|Right|Insrt|__________|
   * |-----------------------------------------------------------------------------|
   * |________|_____|_____|_____|_____|_____|_____|_____|_____|_____|________|_____|
   * |-----------------------------------------------------------------------------|
   * |______|_____|_____|_____|__________|________________|_____|_____|_____|______|
   * `-----------------------------------------------------------------------------'
 */
//This is the PN layer. The pn key was used in the programming of the original core, however because of the limitations of the atmega32u4 we can only have 2 live macros that don't survive reboots
//I made this a programmable layer just so I could put a reset key here

[_PN] = KEYMAP_ANSI(
  _____,    _____,  _____,  _____,  _____,  _____,  _____,  _____,  _____,  _____,  _____,  _____,  _____,  \
  _____,    _____,  _____,  _____,  _____,  _____,  _____,  _____,  _____,  _____,  _____,        _____,  \
  _____,    _____,  _____,  _____,  _____,  _____,  _____,  _____,  _____,  _____,  _____,        _____,  \
  _____,    _____,  _____,  _____,  _____,        _____,        _____,  _____,  _____,        RESET),


  /* Arrow Layer
   * ,-----------------------------------------------------------------------------.
   * |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|
   * |-----------------------------------------------------------------------------|
   * |______|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|__________|
   * |-----------------------------------------------------------------------------|
   * |________|_____|_____|_____|_____|_____|_____|_____|_____|_____|   Up   |_____|
   * |-----------------------------------------------------------------------------|
   * |______|_____|_____|_____|__________|________________|_____|Right| Down| Left |
   * `-----------------------------------------------------------------------------'
 */
//This layer controls the toggle of shift menu pn and control into an arrowkey cluster. This was one of may favourite features of the core.
//The layer is toggled by a macro of LGUI (winkey) LALT (leftalt) and SPC (spacebar). The code for this is in the custom macro section
[_Arrows] = KEYMAP_ANSI(
  _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,\
  _____  , _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,   _____   ,\
  _____   , _____, _____, _____, _____, _____, _____, _____, _____, _____,   KC_UP  , _____,\
  _____  , _____, _____, _____,   _____    ,    _____     , _____,KC_LEFT,KC_DOWN,KC_RIGHT),\


};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////Custom macro begins///////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//This lot are masks for the arrowcluster macro, they are just Bitwise versions of the keycodes involved.
//If you wanted to rebind the arrowcluster macro, swap MOD_BIT(key) with the desired key
#define MOD_WIN_MASK  (MOD_BIT(KC_LGUI))
#define MOD_ALT_MASK  (MOD_BIT(KC_LALT))
#define MOD_SPC_MASK  (MOD_BIT(KC_SPC))

bool Arrowlayer = false; //This records whether the arrow layer is active, its used in the arrowcluster macro

//These are all the key interrupts
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
           
            //This is the code for the arrow cluster toggle macro. Because of the way I coded this you need to press win + alt, then spacebar last
            //This is because i didn't want to do 3 times the checks just so it could be entered in an unnatural order.
            case KC_SPC:
              if (record->event.pressed) {
                if ((keyboard_report->mods & MOD_ALT_MASK) && (keyboard_report->mods & MOD_WIN_MASK)) {
                  unregister_code(KC_LGUI); //These disable the keypressses
                  unregister_code(KC_LALT);
                  unregister_code(KC_SPC); //They may not actually be neccicary but what the hey

                  if(Arrowlayer)
                    {
                      layer_off(_Arrows); //This bit does the actual layer switching
                      Arrowlayer= false;
                      println("On regular layer ");
                    }

                  else
                    {
                      layer_on(_Arrows);
                      Arrowlayer = true;
                      println("On Arrowlayer");
                    }
                     
                  return false; break;
                	}
              	}
             	return true; break;


            //These three cases are the code for layer switching between the four main layers
            //Each one toggles off the others
            //Note if your other actions are setting rgb there needs to be a way to retoggle the layers rgb when you are done
            //Ill probably only implement that later though

        	case Layer_Switcher0: //This is the case for the main layer, it turns off all of the mod layers
        		layer_off(_L1);
        		layer_off(_L2);
        		layer_off(_L3);
        		rgblight_enable();
                rgblight_setrgb(0, 0, 0); //This sets the rgb for the layer
                println("On layer 0");
            return true; break;

            case Layer_Switcher1: 
        		layer_off(_L2);
        		layer_off(_L3);
        		layer_on(_L1);
        		rgblight_enable();
                rgblight_setrgb(255, 0, 0);
                println("On layer 1");
            return true; break;

            case Layer_Switcher2:
        		layer_off(_L1);
        		layer_off(_L3);
        		layer_on(_L2);
        		rgblight_enable();
                rgblight_setrgb(0, 255, 0);
                println("On layer 2");
            return true; break;

            case Layer_Switcher3:
        		layer_off(_L1);
        		layer_off(_L2);
        		layer_on(_L3);
        		rgblight_enable();
                rgblight_setrgb(0, 0, 255);
                println("On layer 3");
            return true; break;

       }
    }
    
    return true;
};

