This is u/surfaceseven's or surfacetoairmissiles's keymap for the rev2 prototype of the Atom47
Since I'm going to be ordering another for that sweet rgb underglow goodness there will probably be an update for the full board.


That said heres how things stand. This keylayout is designed to mimic the standard layout of the vortex core as closely as possible.
This is based on the latest patch and the instruction manual that can be found at http://www.vortexgear.tw/vortex3.asp.
Alternativley: http://www.keyboard-layout-editor.com/#/gists/a8a10bb67534864e441c91330e56a747

The standard layout is as follows
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


Because of the limitations of the atmega32u4 live reprogramming is impossible, however the 4 standard layers have been implemented including the default led changes.

Also implemented is the Win+Alt+Space shortcut which turns the menu, pn, ctrl, shift cluster into arrowkeys.

Note if you are compiling this for the newer model it may pay to turn off RGBLIGHT_ENABLE in the rules.mk for this keymap all rgb lights will be pure red green or blue depending on their layer.


