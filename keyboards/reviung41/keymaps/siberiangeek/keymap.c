// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#include QMK_KEYBOARD_H
#include "siberiangeek.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_reviung41(
    U_NP,              KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,        U_NP,
    U_NP,              LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      LT(MEDIA, KC_G),   LT(FUN, KC_M),     LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),   U_NP,
    U_NP,              KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,        U_NP,
                                                                LT(MOUSE, KC_TAB), LT(NAV, KC_ESC),   LT(NUM, KC_SPC),   LT(SYM, KC_ENT),  LT(FUN, KC_BSPC)
  ),
  [NAV] = LAYOUT_reviung41(
    U_NP,              RESET,             U_NA,              U_NA,              U_NA,              U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             KC_BSLS,        U_NP,
    U_NP,              KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_CAPS,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,        U_NP,
    U_NP,              U_NA,              KC_ALGR,           U_NA,              U_NA,              U_NA,              KC_INS,            KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,         U_NP,
                                                                    KC_TAB,               KC_ESC,            KC_SPC,             KC_ENT,            KC_BSPC
  ),
  [MOUSE] = LAYOUT_reviung41(
    U_NP,              RESET,             U_NA,              U_NA,              U_NA,              U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             KC_PIPE,        U_NP,
    U_NP,              KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,        U_NP,
    U_NP,              U_NA,              KC_ALGR,           U_NA,              U_NA,              U_NA,              U_NU,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,        U_NP,
                                                                    KC_TAB,               KC_ESC,            KC_BTN1,          KC_BTN2,           KC_BTN3
  ),
  [NUM] = LAYOUT_reviung41(
    U_NP,            KC_LBRC,             KC_7,              KC_8,               KC_9,              KC_RBRC,           U_NA,               U_NA,               U_NA,            U_NA,               RESET,         U_NP,
    U_NP,            KC_SCLN,             KC_4,              KC_5,               KC_6,              KC_EQL,            U_NA,               KC_LSFT,            KC_LCTL,         KC_LALT,            KC_LGUI,       U_NP,
    U_NP,            KC_GRV,              KC_1,              KC_2,               KC_3,              KC_BSLS,           U_NA,               U_NA,               U_NA,            KC_ALGR,            U_NA,          U_NP,
                                                                    KC_MINS,               KC_0,             KC_SPC,         KC_ENT,           KC_BSPC
  ), 
  [SYM] = LAYOUT_reviung41(
    U_NP,            KC_LCBR,             KC_AMPR,          KC_ASTR,            KC_LPRN,           KC_RCBR,           U_NA,               U_NA,               U_NA,            U_NA,               RESET,         U_NP,
    U_NP,            KC_COLN,             KC_DLR,           KC_PERC,            KC_CIRC,           KC_PLUS,           U_NA,               KC_LSFT,            KC_LCTL,         KC_LALT,            KC_LGUI,       U_NP,              
    U_NP,            KC_TILD,             KC_EXLM,          KC_AT,              KC_HASH,           KC_PIPE,           U_NA,               U_NA,               U_NA,            KC_ALGR,            U_NA,          U_NP,              
                                                                    KC_UNDS,               KC_LPRN,          KC_RPRN,           KC_ENT,            KC_BSPC
  ),
  [FUN] = LAYOUT_reviung41(
    U_NP,            KC_LPRN,             KC_F7,            KC_F8,              KC_F9,             KC_RPRN,            U_NA,              U_NA,               U_NA,             U_NA,              RESET,         U_NP,
    U_NP,            KC_F10,              KC_F4,            KC_F5,              KC_F6,             KC_F11,             U_NA,              KC_LSFT,            KC_LCTL,          KC_LALT,           KC_LGUI,       U_NP,
    U_NP,            KC_F10,              KC_F1,            KC_F2,              KC_F3,             KC_F12,             U_NA,              U_NA,               U_NA,             KC_ALGR,           U_NA,          U_NP,
                                                                    KC_TAB,               KC_ESC,            KC_SPC,            KC_ENT,            KC_BSPC
  )
};
