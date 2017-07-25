/* Copyright 2017 Benjamin Lok
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "v60_type_r.h"

#define _____ KC_TRNS
#define XXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {    /* Keymap 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| Bksp  |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |FN1   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |LShift/(|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| RShift/) |
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |      Space/L3           |FN1 |Gui |App|Ctrl|
     * `-----------------------------------------------------------'
     */
    [0] = KEYMAP(
        KC_ESC,     KC_1,    KC_2,          KC_3,       KC_4,   KC_5,    KC_6,      KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     XXXXX,      KC_BSPC,                \
        KC_TAB,     KC_Q,    KC_W,          KC_E,       KC_R,   KC_T,    KC_Y,      KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,                KC_BSLS,                \
        MO(1),      KC_A,    KC_S,          KC_D,       KC_F,   KC_G,    KC_H,      KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,                            KC_ENT,                 \
        KC_LSPO,    XXXXX,   KC_Z,          KC_X,       KC_C,   KC_V,    KC_B,      KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,                KC_RSPC,    XXXXX,                  \
        KC_LCTL,    KC_LGUI, KC_LALT,                           LT(2, KC_SPC),                                                      MO(1),      KC_RGUI,    KC_APP,     MT(MOD_RCTL, KC_ENT)    ),
    /* Keymap 1: FN Layer
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  Del  |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |Cal|PgU| Up|PgD|PSc|   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |Hom| Lt| Dn| Rt|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |End|Mut|VDn|Vup|   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    [1] = KEYMAP(
        KC_GRV,     KC_F1,     KC_F2,       KC_F3,      KC_F4,  KC_F5,   KC_F6,     KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     _____,      KC_DEL, \
        _____,      _____,     KC_UP,       _____,      _____,  _____,   KC_CALC,   KC_HOME,    KC_UP,      KC_END,     KC_PSCR,    _____,      _____,                  _____,  \
        _____,      KC_LEFT,   KC_DOWN,     KC_RGHT,    _____,  _____,   KC_PGUP,   KC_LEFT,    KC_DOWN,    KC_RGHT,    _____,      _____,                              _____,  \
        _____,      _____,     _____,       _____,      _____,  _____,   _____,     KC_PGDN,    KC_MUTE,    KC_VOLD,    KC_VOLU,    _____,                  _____,      _____,  \
        _____,      _____,     _____,                           _____,                                                              _____,      _____,      _____,      _____   ),
    /* Keymap 2: Mouse Keys Layer
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |MWU|MWD|   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |MLt|MDn|MUp|MRt|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |SPC|Ms1|Ms2|Ms3|   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    [2] = KEYMAP(
        _____,   _____,   _____,   _____,   _____,   _____,   _____,        _____,          _____,      _____,          _____,      _____,      _____,      _____,      _____,  \
        _____,   _____,   _____,   _____,   _____,   _____,   _____,        KC_MS_BTN1,     KC_MS_UP,   KC_MS_BTN2,     KC_MS_BTN3, _____,      _____,                  _____,  \
        _____,   _____,   _____,   _____,   _____,   _____,   KC_MS_WH_UP,  KC_MS_LEFT,     KC_MS_DOWN, KC_MS_RIGHT,    _____,      _____,                              _____,  \
        _____,   _____,   _____,   _____,   _____,   _____,   _____,        KC_MS_WH_DOWN,  _____,      _____,          _____,      _____,                  _____,      _____,  \
        _____,   _____,   _____,                              _____,                                                                _____,      _____,      _____,      _____   )
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
