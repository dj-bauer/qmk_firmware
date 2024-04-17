#include QMK_KEYBOARD_H

enum layer {BASE_L, NUM_L, NAV_L, FN_L};

#define _TABNUM LT(NUM_L, KC_TAB)
#define _SNAV LT(NAV_L, KC_SPC)
#define _FN MO(FN_L)

/*
 * Wir funktionieren diese Layer?
 * ==============================
 * in QMK hast du immer eine aktive Layer.
 * Normalerweise ist das die base-Layer (per default 0)
 * Wenn eine taste gedrückt wird, wird von der aktiven layer von oben vom stack
 * nach unten durchgereicht, bis eine Layer für die Taste einen Nutzen hat.
 *
 * Bedeutungen:
 * =============
 * _key ich habe alle macros, die oben defined werden mit `_` geprefixt
 * XXXXXXX ist die NOOP Taste, dann wird der Tastendruck ignoriert
 * ______ ist die Transparente Taste, dann wird in der runterliegenden layer geschaut.
 * MO(<layer>) solange die Taste gedrückt ist, wird <layer> aktiviert
 * LT(<layer>, <key>) bei drücken wird <key> gesendet, 
 *                    bei halten wird temporär <layer> aktiviert.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE_L] = LAYOUT_split_4x6_3(
XXXXXXX,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                            KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     XXXXXXX,
KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                            KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_DEL,
_TABNUM,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                            KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                            KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT,
                                              KC_LCTL,  KC_LGUI,   KC_LALT,  _SNAV,   KC_BSPC,  _FN
),

[NUM_L] = LAYOUT_split_4x6_3(
_______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                              KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     _______,
_______,    KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_TILD,                            _______,    KC_7,       KC_8,       KC_9,       _______,    KC_BSPC,
_______,    KC_PERC,    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_GRV,                             KC_MINS,    KC_4,       KC_5,       KC_6,       KC_PIPE,    _______,
_______,    _______,    _______,    _______,    _______,    _______,                            _______,    KC_1,       KC_2,       KC_3,       KC_BSLS,    _______,
                                                _______,    _______,    _______,    _______,    KC_0,       KC_DOT
),

[NAV_L] = LAYOUT_split_4x6_3(
_______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                              KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     _______,
_______,    KC_UNDS,    KC_PLUS,    KC_LCBR,    KC_RCBR,    KC_TILD,                            KC_PGUP,    KC_HOME,    KC_UP,      KC_END,     KC_PSCR,    KC_BSPC,
_______,    KC_MINS,    KC_EQL,     KC_LBRC,    KC_RBRC,    KC_GRV,                             KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_PIPE,    _______,
_______,    KC_F11,     KC_F12,     KC_LPRN,    KC_RPRN,    _______,                            KC_INS,     KC_MUTE,    KC_VOLD,    KC_VOLU,    KC_BSLS,    _______,
                                                _______,    _______,    _______,    _______,    _______,    _______
),
                             
[FN_L] = LAYOUT_split_4x6_3(
_______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                              KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     _______,
_______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      _______,                            _______,    _______,    _______,    _______,    KC_PSCR,    _______,
_______,    KC_F5,      KC_F6,      KC_F7,      KC_F8,      _______,                            _______,    _______,    _______,    _______,    _______,    _______,
_______,    KC_F9,      KC_F10,     KC_F11,     KC_F12,     _______,                            _______,    _______,    _______,    _______,    _______,    _______,
                                                _______,    _______,    _______,    _______,    _______,    _______
),
                             
};
