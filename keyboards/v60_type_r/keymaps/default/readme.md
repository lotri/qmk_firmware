V60 Type R QMK based keyboard firmware
======================

Retail 60% firmware programmable keyboard.  [KBParadise V60 Type R](https://www.massdrop.com/buy/37031?mode=guest_open)

The keyboard ships in two versions - V60 Type R and V60 Type R Polestar.  The Polestar has RGB underglow lighting, and both versions
use a custom version of TMK, which stores keymaps in the EEPROM of the built in ATMega32U4.

This version of QMK allows reprogramming the V60 Type R to enable all the QMK features.  It currently doesn't support the LED backlighting
or the RGB underglow of the Polestar.

## Quantum MK Firmware

For the full Quantum feature list, see [the parent readme](/).

## Building

Download or clone the whole firmware and navigate to the keyboards/v60_type_r folder. Once your dev env is setup, you'll be able to type `make` to generate your .hex - you can then use the Teensy Loader to program your .hex file.

Depending on which keymap you would like to use, you will have to compile slightly differently.

### Default

To build with the default keymap, simply run `make default`.

The default keymaps look like this.

    Keymap 0: Default Layer
    ,-----------------------------------------------------------.
    |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   Bs  |
    |-----------------------------------------------------------|
    |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
    |-----------------------------------------------------------|
    |CapsFN|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
    |-----------------------------------------------------------|
    |LShift  |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| RShift   |
    |-----------------------------------------------------------|
    |Ctrl|Alt |Gui |      Space/Mouse Keys   |Gui |Alt |Ctrl|Fn1|
    `-----------------------------------------------------------'

    Keymap 1: FN Layer
    ,-----------------------------------------------------------.
    |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  Del  |
    |-----------------------------------------------------------|
    |     |   |   |   |   |   |   |   |   |   |PSc|SLk|Pau| Ins |
    |-----------------------------------------------------------|
    |      |   |   |   |   |   | Lt| Dn| Up| Rt|Hom|PgU|        |
    |-----------------------------------------------------------|
    |        |   |   |   |   |   |Mut|VDn|VUp|End|PgD|          |
    |-----------------------------------------------------------|
    |    |    |    |                        |    |    |    |    |
    `-----------------------------------------------------------'

    Keymap 2: Mouse Keys Layer
    ,-----------------------------------------------------------.
    |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
    |-----------------------------------------------------------|
    |     |   |   |   |   |   |   |MWU|MWD|   |   |   |   |     |
    |-----------------------------------------------------------|
    |      |   |   |   |   |   |MLt|MDn|MUp|MRt|   |   |        |
    |-----------------------------------------------------------|
    |        |   |   |   |   |SPC|Ms1|Ms2|Ms3|   |   |          |
    |-----------------------------------------------------------|
    |    |    |    |                        |    |    |    |    |
    `-----------------------------------------------------------'



The key labelled FN1 is not assigned in the default keymap, and Caps Lock is mapped to switch momentarily to the FN Layer when help, and caps locks when pressed


### Other Keymaps

No other keymaps have been defined just yet!