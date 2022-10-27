// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-ly: t -*-

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#include "manna-harbour_miryoku.h"

#define MOUSE(x) LT(MOUSE, x)
#define NAV(x) LT(NAV, x)
#define NUM(x) LT(NUM, x)
#define SYM(x) LT(SYM, x)
#define FUN(x) LT(FUN, x)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LAYOUT_miryoku(
    KC_Q,          KC_W,          KC_F,           KC_P,          KC_B,          KC_J,           KC_L,          KC_U,           KC_Y,           KC_QUOT,
    LGUI_T(KC_A),  LALT_T(KC_R),  LCTL_T(KC_S),   LSFT_T(KC_T),  KC_G,          KC_M,           LSFT_T(KC_N),  LCTL_T(KC_E),   LALT_T(KC_I),   LGUI_T(KC_O),
    KC_Z,          KC_X,          KC_C,           KC_D,          KC_V,          KC_K,           KC_H,          KC_COMM,        KC_DOT,         KC_SLSH,
    U_NP,          U_NP,          MOUSE(KC_ESC),  NAV(KC_SPC),   NUM(KC_ENT),   NUM(KC_ENT),    SYM(KC_SPC),   FUN(KC_BSPC),   U_NP,           U_NP
  ),
  [NAV] = LAYOUT_miryoku(
    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,    U_PST,   U_NU,    KC_UP,   U_NU,    U_NU,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NU,    U_CPY,   KC_LEFT, KC_DOWN, KC_RGHT, U_NU,
    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,    U_CUT,   U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    KC_ESC,  U_NA,    KC_ENT,  KC_ENT,  KC_TAB,  KC_BSPC, U_NP,    U_NP
  ),
  [MOUSE] = LAYOUT_miryoku(
    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,    U_PST,   KC_WH_D,   KC_MS_U, U_NU,    U_NU,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_CPY,   KC_MS_L,   KC_MS_D, KC_MS_R, U_NU,
    U_NA,    U_NA,    U_NA,    U_NA,    U_NA,    U_CUT,   KC_WH_U,   KC_WH_L, KC_WH_R, U_NU,
    U_NP,    U_NP,    U_NA,    KC_SPC,  KC_ENT,  KC_BTN1, KC_BTN2,   KC_BTN3, U_NP,    U_NP
  ),
  [NUM] = LAYOUT_miryoku(
    KC_GRV,  KC_7,    KC_8,    KC_9,         KC_0,    U_PST,   KC_LPRN, KC_RPRN,  KC_MINUS, KC_EQUAL,
    KC_SCLN, KC_4,    KC_5,    LSFT_T(KC_6), KC_EQL,  U_CPY,   KC_LSFT, KC_LCTL,  KC_LALT,  KC_LGUI,
    U_NU,    KC_1,    KC_2,    KC_3,         KC_BSLS, U_CUT,   KC_LBRC, KC_RBRC,  U_NU,     U_NU,
    U_NP,    U_NP,    KC_ESC,  KC_SPC,       U_NA,    U_NA,    KC_SPC,  KC_BSPC,  U_NP,     U_NP
  ),
  [SYM] = LAYOUT_miryoku(
    KC_TILD, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_NU,    KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, U_NA,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    KC_ESC,  KC_TAB,  KC_ENT,  KC_ENT,  KC_SPC,  KC_BSPC, U_NP,    U_NP
  ),
  [FUN] = LAYOUT_miryoku(
    U_NU,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  U_NU,    U_NU,    U_NU,    U_NU,    RESET,
    U_NU,  KC_F4,   KC_F5,   KC_F6,   KC_F11,  U_NU,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_NU,  KC_F1,   KC_F2,   KC_F3,   KC_F12,  U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,  U_NP,    KC_ESC,  KC_SPC,  KC_ENT,  KC_ENT,  KC_SPC,  U_NA,    U_NP,    U_NP
  )
};
