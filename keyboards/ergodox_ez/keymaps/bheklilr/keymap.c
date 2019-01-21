#include QMK_KEYBOARD_H
#include "keyboards/ergodox_ez/ergodox_ez.h"
#include "version.h"

#define BASE 0 // default layer
#define ARRS 1 // arrow keys and media keys
#define SYMB 2 // symbols
#define GARR 3 // GUI + Arrow keys
#define MDIA 4 // Media layer
#define GAME 5

#define ARRST(k) LT(ARRS, k)
#define SYMBT(k) LT(SYMB, k)
#define GARDT(k) LT(GARR, k)
#define MDIAT(k) LT(MDIA, k)
#define GAME_ON  TG(GAME)

#define GOTO      LCTL(KC_P)
#define PROJ      LCTL(LALT(KC_P))
#define CMDPAL    RCTL(RSFT(KC_P))
#define FILES     RCTL(RSFT(KC_E))

#define CTLALT    LCTL(ALT_T(KC_NO))
#define CTLSFT    LCTL(SFT_T(KC_NO))
#define ALTSFT    LALT(SFT_T(KC_NO))

#define G_UP    LGUI(KC_UP)
#define G_DOWN  LGUI(KC_DOWN)
#define G_LEFT  LGUI(KC_LEFT)
#define G_RGHT  LGUI(KC_RGHT)

#define UNDO LCTL(KC_Z)
#define SAVE LCTL(KC_S)

#define ___ KC_TRANSPARENT
#define XXX KC_NO


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Base */
[BASE] = LAYOUT_ergodox(
  KC_TILD,          KC_1,           KC_2,           KC_3,         KC_4,           KC_5,               KC_6,
  KC_DELT,          KC_Q,           KC_W,           KC_E,         KC_R,           KC_T,               KC_PGUP,
  KC_ESC,           C_S_T(KC_A),    ALT_T(KC_S),    GARDT(KC_D),  ARRST(KC_F),    KC_G,
  KC_LSFT,          CTL_T(KC_Z),    KC_X,           KC_C,         KC_V,           KC_B,               KC_PGDN,
  UNDO,             SAVE,           KC_INS,         KC_HOME,      KC_END,
                                                                                  LGUI(KC_L),         KC_LGUI,
                                                                                                      KC_APP,
                                                                  SYMBT(KC_BSPC), KC_TAB,             LCA_T(KC_LBRC),
  /***********************************************************************************************************/
  KC_GRV,           KC_7,           KC_8,           KC_9,         KC_0,           KC_MINS,            KC_BSLS,
  FILES,            KC_Y,           KC_U,           KC_I,         KC_O,           KC_P,               KC_EQL,
                    KC_H,           SYMBT(KC_J),    MDIAT(KC_K),  ALT_T(KC_L),    C_S_T(KC_SCLN),     KC_QUOT,
  GOTO,             KC_N,           KC_M,           KC_COMM,      KC_DOT,         CTL_T(KC_SLSH),     KC_RSFT,
                                    KC_UP,          KC_DOWN,      KC_LEFT,        KC_RIGHT,           CMDPAL,
  KC_CALC,          KC_RGUI,
  ALTSFT,
  ALT_T(KC_RBRC),   SYMBT(KC_ENT),         ARRST(KC_SPC)
),

/* Symbols */
[SYMB] = LAYOUT_ergodox(
  ___,              KC_F1,          KC_F2,          KC_F3,        KC_F4,          KC_F5,              KC_F6,
  ___,              KC_EXLM,        KC_AT,          KC_LCBR,      KC_RCBR,        KC_PIPE,            ___,
  ___,              KC_HASH,        KC_DLR,         KC_LPRN,      KC_RPRN,        KC_GRV,
  ___,              KC_PERC,        KC_CIRC,        KC_LBRC,      KC_RBRC,        KC_TILD,            ___,
  ___,              ___,            ___,            ___,          ___,
                                                                                  ___,                ___,
                                                                                                      ___,
                                                                  ___,            ___,                ___,
  /***********************************************************************************************************/
  KC_NUMLOCK,       ___,            ___,            ___,          ___,            ___,                ___,
  ___,              ___,            KC_P7,          KC_P8,        KC_P9,          KC_PAST,            ___,
                    ___,            KC_P4,          KC_P5,        KC_P6,          KC_PPLS,            ___,
  ___,              ___,            KC_P1,          KC_P2,        KC_P3,          KC_PSLS,            ___,
                                    ___,            KC_PDOT,      KC_P0,          KC_PEQL,            ___,
  ___,              ___,
  ___,
  ___,              ___,        ___
),
/* Media */
[MDIA] = LAYOUT_ergodox(
  ___,              ___,            ___,            ___,          ___,            ___,                KC_MUTE,
  ___,              ___,            ___,            KC_MS_U,      ___,            ___,                KC_VOLU,
  ___,              ___,            KC_MS_L,        KC_MS_D,      KC_MS_R,        ___,
  ___,              ___,            ___,            ___,          ___,            ___,                KC_VOLD,
  ___,              ___,            ___,            KC_MPRV,      KC_MNXT,
                                                                                  ___,                ___,
                                                                                                      ___,
                                                                  KC_BTN1,        KC_BTN2,            ___,
  /***********************************************************************************************************/
  ___,              ___,            ___,            ___,          ___,            ___,                ___,
  KC_BRIU,          ___,            ___,            ___,          ___,            ___,                ___,
                    ___,            ___,            ___,          ___,            ___,                KC_MPLY,
  KC_BRID,          ___,            ___,            ___,          ___,            ___,                ___,
                                    ___,            ___,          ___,            ___,                ___,
  ___,              ___,
  ___,
  ___,              KC_WH_D,        KC_WH_U
),
/* Arrows */
[ARRS] = LAYOUT_ergodox(
  GAME_ON,          ___,            ___,            ___,          ___,            ___,                ___,
  ___,              ___,            ___,            ___,          ___,            ___,                ___,
  ___,              ___,            ___,            ___,          ___,            ___,
  ___,              ___,            ___,            ___,          ___,            ___,                ___,
  ___,              ___,            ___,            ___,          ___,
                                                                                  ___,                ___,
                                                                                                      ___,
                                                                  CTLALT,          CTLSFT,            KC_MEH,
  /**************************************************************************************************************/
  ___,              KC_F7,          KC_F8,          KC_F9,        KC_F10,         KC_F11,             KC_F12,
  ___,              ___,            ___,            KC_UP,        ___,            ___,                ___,
                    ___,            KC_LEFT,        KC_DOWN,      KC_RGHT,        ___,                ___,
  ___,              ___,            ___,            ___,          ___,            ___,                ___,
                                    ___,            ___,          ___,            ___,                ___,
  ___,              ___,
  ___,
  ___,              ___,            ___
),
/* GUI + Arrow keys */
[GARR] = LAYOUT_ergodox(
  ___,              ___,            ___,            ___,          ___,            ___,                ___,
  ___,              ___,            ___,            ___,          ___,            ___,                ___,
  ___,              ___,            ___,            ___,          ___,            ___,
  ___,              ___,            ___,            ___,          ___,            ___,                ___,
  ___,              ___,            ___,            ___,          ___,
                                                                                  ___,                ___,
                                                                                                      ___,
                                                                  CTLALT,         CTLSFT,             KC_MEH,
  /**************************************************************************************************************/
  ___,              ___,            ___,            ___,          ___,            ___,                KC_CALC,
  ___,              ___,            ___,            G_UP,         ___,            ___,                ___,
                    ___,            G_LEFT,         G_DOWN,       G_RGHT,         ___,                ___,
  ___,              ___,            ___,            ___,          ___,            ___,                ___,
                                    ___,            ___,          ___,            ___,                ___,
  ___,              ___,
  ___,
  ___,              LSFT(KC_LGUI),  KC_LGUI
),
/* Gaming (concept)

Leave WASD alone
BKSP -> Enter
Tab -> Space
Enter -> BKSP
Space -> Tab
Delete -> Tab
~ -> Delete
If BKSP held then 1-5 becomes 7-0 and 6 becomes -
Remove additional modifies and layers

Activate by combo, BKSP+TAB+ENTER+SPACE
*/
[GAME] = LAYOUT_ergodox(
  ___,              ___,            ___,            ___,          ___,            ___,                ___,
  ___,              ___,            ___,            ___,          ___,            ___,                ___,
  ___,              ___,            ___,            ___,          ___,            ___,
  ___,              ___,            ___,            ___,          ___,            ___,                ___,
  ___,              ___,            ___,            ___,          ___,
                                                                                  ___,                ___,
                                                                                                      ___,
                                                                  KC_ENT,         KC_SPC,             ___,
  /**************************************************************************************************************/
  ___,              ___,            ___,            ___,          ___,            ___,                ___,
  ___,              ___,            ___,            ___,          ___,            ___,                ___,
                    ___,            ___,            ___,          ___,            ___,                ___,
  ___,              ___,            ___,            ___,          ___,            ___,                ___,
                                    ___,            ___,          ___,            ___,                GAME_ON,
  ___,              ___,
  ___,
  ___,              KC_BSPC,        KC_TAB
),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(SYMB)                // FN1 - Momentary Layer 1 (Symbols)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
  rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
uint32_t layer_state_set_user(uint32_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  uint8_t layer = biton32(state);
  switch (layer) {
      case 0:
        #ifdef RGBLIGHT_COLOR_LAYER_0
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
        #else
        #ifdef RGBLIGHT_ENABLE
          rgblight_init();
        #endif
        #endif
        break;
      case 1:
        ergodox_right_led_1_on();
        #ifdef RGBLIGHT_COLOR_LAYER_1
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
        #endif
        break;
      case 2:
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_2
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
        #endif
        break;
      case 3:
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_3
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
        #endif
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_4
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
        #endif
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_5
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
        #endif
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_6
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
        #endif
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_7
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
        #endif
        break;
      default:
        break;
    }

  return state;
};
