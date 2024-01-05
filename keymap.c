// tsadowski

#include QMK_KEYBOARD_H
#include "config.h"

enum layers {DFLT_LYR, MOUS_LYR, NMBR_LYR, GAME_LYR};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [DFLT_LYR] = LAYOUT_split_3x5_2( // LETTERS, SYMBOLS, SPACE, BACKSPACE, DELETE, COMBO REFERENCE
        KC_W,    KC_C,    KC_H,    KC_Q,    KC_Z,            KC_X,         KC_Y,    KC_K,    KC_F,    KC_P,
        KC_N,    KC_S,    KC_R,    KC_T,    KC_COMM,         KC_DOT,       KC_E,    KC_I,    KC_A,    KC_O,
        KC_M,    KC_J,    KC_L,    KC_D,    KC_SLSH,         KC_BSLS,      KC_U,    KC_G,    KC_V,    KC_B,
                                               KC_BSPC, KC_SPC,          MO(NMBR_LYR), KC_DEL),

    [MOUS_LYR] = LAYOUT_split_3x5_2( // MOUSE, ARROWS, FUNCTIONS
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,           KC_F6,        KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, KC_F11,          KC_F12,       KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
        KC_HOME, KC_PGUP, KC_PGDN, KC_END,  KC_TRNS,         KC_TRNS,      KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
                                               KC_TRNS, MO(NMBR_LYR),    KC_BTN1,      KC_BTN2),

    [NMBR_LYR] = LAYOUT_split_3x5_2( // NUMBERS, SYMBOLS, ARROWS
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,            KC_6,         KC_7,    KC_8,    KC_9,    KC_0,
        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_TRNS,         KC_TRNS,      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
        KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_TRNS,         KC_TRNS,      KC_LPRN, KC_WH_D, KC_WH_U, KC_RPRN,
                                               KC_TRNS, KC_TRNS,         KC_TRNS,      KC_TRNS),

    [GAME_LYR] = LAYOUT_split_3x5_2( // NO MODS ALLOWED
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,            KC_6,         KC_7,    KC_8,    KC_9,    KC_0,
        KC_A,    KC_W,    KC_S,    KC_D,    KC_F,            KC_Y,         KC_U,    KC_I,    KC_O,    KC_P,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,         KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
                                               KC_K,    KC_L,            KC_R,         KC_T)
};

enum combos {                        // MODS, SYMBOLS, LAYERS
// oxxoo      ooxxo
  TAB_CMB_1, TAB_CMB_2,
  SFT_CMB_1, SFT_CMB_2,
  MSE_CMB_M, DFT_CMB,
// xooxo      oxoox
  ALT_CMB_1, ALT_CMB_2,
  CTL_CMB_1, CTL_CMB_2,
  GME_CMB,   MSE_CMB,
// oooxx      xxooo
  LBR_CMB,   RBR_CMB,
  ESC_CMB,   ENT_CMB,
  OSG_CMB_1, OSG_CMB_2,
// xooox      xooox
  MIN_CMB,   EQL_CMB,
  QTE_CMB,   SCL_CMB,
  GRV_CMB,   PSC_CMB,
};

// oxxoo (left hand)
const uint16_t PROGMEM tab_combo_1[] = {KC_C,    KC_H,    COMBO_END};
const uint16_t PROGMEM sft_combo_1[] = {KC_S,    KC_R,    COMBO_END};
const uint16_t PROGMEM mse_combo_m[] = {KC_J,    KC_L,    COMBO_END};
// ooxxo (right hand)
const uint16_t PROGMEM tab_combo_2[] = {KC_K,    KC_F,    COMBO_END};
const uint16_t PROGMEM sft_combo_2[] = {KC_I,    KC_A,    COMBO_END};
const uint16_t PROGMEM dft_combo[]   = {KC_G,    KC_V,    COMBO_END};
// xooxo (left hand)
const uint16_t PROGMEM alt_combo_1[] = {KC_W,    KC_Q,    COMBO_END};
const uint16_t PROGMEM ctl_combo_1[] = {KC_N,    KC_T,    COMBO_END};
const uint16_t PROGMEM gme_combo[]   = {KC_M,    KC_D,    COMBO_END};
// oxoox (right hand)
const uint16_t PROGMEM alt_combo_2[] = {KC_Y,    KC_P,    COMBO_END};
const uint16_t PROGMEM ctl_combo_2[] = {KC_E,    KC_O,    COMBO_END};
const uint16_t PROGMEM mse_combo[]   = {KC_U,    KC_B,    COMBO_END};
// oooxx (left hand)
const uint16_t PROGMEM lbr_combo[]   = {KC_Q,    KC_Z,    COMBO_END};
const uint16_t PROGMEM esc_combo[]   = {KC_T,    KC_COMM, COMBO_END};
const uint16_t PROGMEM osg_combo_1[] = {KC_D,    KC_SLSH, COMBO_END};
// xxooo (right hand)
const uint16_t PROGMEM rbr_combo[]   = {KC_X,    KC_Y,    COMBO_END};
const uint16_t PROGMEM ent_combo[]   = {KC_DOT,  KC_E,    COMBO_END};
const uint16_t PROGMEM osg_combo_2[] = {KC_BSLS, KC_U,    COMBO_END};
// xooox (left hand)
const uint16_t PROGMEM min_combo[]   = {KC_W,    KC_Z,    COMBO_END};
const uint16_t PROGMEM qte_combo[]   = {KC_N,    KC_COMM, COMBO_END};
const uint16_t PROGMEM grv_combo[]   = {KC_M,    KC_SLSH, COMBO_END};
// xooox (right hand)
const uint16_t PROGMEM eql_combo[]   = {KC_X,    KC_P,    COMBO_END};
const uint16_t PROGMEM scl_combo[]   = {KC_DOT,  KC_O,    COMBO_END};
const uint16_t PROGMEM psc_combo[]   = {KC_BSLS, KC_B,    COMBO_END};

combo_t key_combos[] = {
  //                     oxxoo                                            ooxxo
  [TAB_CMB_1] = COMBO(tab_combo_1, KC_TAB),       [TAB_CMB_2] = COMBO(tab_combo_2, KC_TAB),
  [SFT_CMB_1] = COMBO(sft_combo_1, KC_LSFT),      [SFT_CMB_2] = COMBO(sft_combo_2, KC_RSFT),
  [MSE_CMB_M] = COMBO(mse_combo_m, MO(MOUS_LYR)), [DFT_CMB]   = COMBO(dft_combo,   TO(DFLT_LYR)),
  //                     xooxo                                            oxoox
  [ALT_CMB_1] = COMBO(alt_combo_1, KC_LALT),      [ALT_CMB_2] = COMBO(alt_combo_2, KC_RALT),
  [CTL_CMB_1] = COMBO(ctl_combo_1, KC_LCTL),      [CTL_CMB_2] = COMBO(ctl_combo_2, KC_RCTL),
  [GME_CMB]   = COMBO(gme_combo,   TO(GAME_LYR)), [MSE_CMB]   = COMBO(mse_combo,   TO(MOUS_LYR)),
  //                     oooxx                                            xxooo
  [LBR_CMB]   = COMBO(lbr_combo,   KC_LBRC),      [RBR_CMB]   = COMBO(rbr_combo,   KC_RBRC),
  [ESC_CMB]   = COMBO(esc_combo,   KC_ESC),       [ENT_CMB]   = COMBO(ent_combo,   KC_ENT),
  [OSG_CMB_1] = COMBO(osg_combo_1, KC_LGUI),      [OSG_CMB_2] = COMBO(osg_combo_2, KC_RGUI),
  //                     xooox                                            xooox
  [MIN_CMB]   = COMBO(min_combo,   KC_MINUS),     [EQL_CMB]   = COMBO(eql_combo,   KC_EQL),
  [QTE_CMB]   = COMBO(qte_combo,   KC_QUOTE),     [SCL_CMB]   = COMBO(scl_combo,   KC_SCLN),
  [GRV_CMB]   = COMBO(grv_combo,   KC_GRV),       [PSC_CMB]   = COMBO(psc_combo,   KC_PRINT_SCREEN),
};

bool combo_should_trigger(uint16_t     combo_index,
                          combo_t      *combo,
                          uint16_t     keycode,
                          keyrecord_t  *record)
{
    if (layer_state_is(GAME_LYR))
        if (combo_index != DFT_CMB &&
            combo_index != MSE_CMB &&
            combo_index != MSE_CMB_M &&
            combo_index != ESC_CMB &&
            combo_index != ENT_CMB)
              return false;

    if (layer_state_is(MOUS_LYR))
        if (combo_index == MSE_CMB_M)
              return false;

    return true;
}
