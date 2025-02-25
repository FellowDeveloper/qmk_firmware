// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#include QMK_KEYBOARD_H
#include "siberiangeek.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_reviung41(
    U_NP,  KC_Q,            KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,        KC_CUT,
    U_NP,  LGUI_T(KC_A),    LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      LT(MEDIA, KC_G),   LT(FUN, KC_M),     LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),   U_PST,
    U_NP,  KC_Z,            ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,        U_CPY,
                                                                LT(MOUSE, KC_ESC), LT(NAV, KC_SPC),   LT(NUM, KC_ENT),   LT(SYM, KC_SPC),  LT(FUN, KC_BSPC)
  ),
  [NAV] = LAYOUT_reviung41(
    U_NP,  RESET,           U_NA,              U_NA,              U_NA,              U_NA,              U_NP,             KC_PGUP,           KC_UP,             KC_HOME,           KC_BSLS,        KC_CUT,
    U_NP,  KC_LGUI,         KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NP,             KC_LEFT,           KC_DOWN,           KC_RGHT,           U_NP,           U_PST,
    U_NP,  U_NA,            KC_ALGR,           U_NA,              U_NA,              U_NA,              U_NP,             KC_PGDN,           U_NP,              KC_END,            U_NP,           U_CPY,
    /**/   KC_ESC,          KC_SPC,            KC_ENT,            KC_TAB,            KC_BSPC
  ),
  [MOUSE] = LAYOUT_reviung41(
    U_NP,  RESET,            KC_BTN1,           KC_MS_U,           KC_BTN2,           KC_PIPE,           U_CPY,           U_NP,              KC_MS_UP,          U_NP,              U_NP,           U_NP,
    U_NP,  KC_LGUI,          KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,            KC_MS_L,           KC_MS_D,           KC_MS_R,           U_NP,           U_NP,
    U_NP,  U_NA,             KC_ALGR,           U_NA,              U_NA,              U_NA,              U_NU,            KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,        U_NP,
    /***/  KC_ESC,           KC_SPC,            KC_MS_BTN1,        KC_MS_BTN2,        KC_BSPC
  ),
  //
  [NUM] = LAYOUT_reviung41(
    U_NP,  KC_LBRC,          KC_7,              KC_8,               KC_9,              KC_RBRC,           U_CPY,               KC_LPRN,            KC_RPRN,       KC_MINS,         KC_EQUAL,    U_NP,
    U_NP,  LGUI_T(KC_SCLN),  KC_4,              KC_5,               LSFT_T(KC_6),      KC_EQL,            U_PST,               KC_LSFT,            KC_LCTL,       KC_LALT,         KC_LGUI,     U_NP,
    U_NP,  KC_GRV,           KC_1,              KC_2,               KC_3,              KC_BSLS,           KC_CUT,              KC_CAPS,            U_NP,          U_NP,            U_NP,        U_NP,
    /***/  KC_0,             KC_SPC,            KC_ENT,             KC_SPC,            KC_BSPC
  ), 
  [SYM] = LAYOUT_reviung41(
    U_NP,  KC_LCBR,          KC_AMPR,          KC_ASTR,            KC_LPRN,           KC_RCBR,           U_NA,               U_NA,               U_NA,            U_NA,               RESET,         U_CPY,
    U_NP,  KC_COLN,          KC_DLR,           KC_PERC,            KC_CIRC,           KC_PLUS,           U_NA,               KC_LSFT,            KC_LCTL,         KC_LALT,            KC_LGUI,       U_NP,              
    U_NP,  KC_TILD,          KC_EXLM,          KC_AT,              KC_HASH,           KC_PIPE,           U_NA,               U_NA,               U_NA,            KC_ALGR,            U_NA,          U_NP,              
    /***/  KC_ESC,           KC_TAB,           KC_ENT,             KC_SPC,            KC_BSPC
  ),
  [FUN] = LAYOUT_reviung41(
    U_NP,            U_NP,                KC_F7,            KC_F8,              KC_F9,             KC_F10,            U_NA,              U_NA,               U_NA,             U_NA,              RESET,         U_CPY,
    U_NP,            U_NP,                KC_F4,            KC_F5,              KC_F6,             KC_F11,             U_NA,              KC_LSFT,            KC_LCTL,          KC_LALT,           KC_LGUI,       U_NP,
    U_NP,            U_NP,                KC_F1,            KC_F2,              KC_F3,             KC_F12,             U_NA,              U_NA,               U_NA,             KC_ALGR,           U_NA,          U_NP,
                                                                    KC_ESC,               KC_SPC,            KC_ENT,             KC_SPC,            KC_BSPC
  )
};
