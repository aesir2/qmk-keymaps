#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // Defines for task manager and such
#define WSR LCTL(LALT(KC_RGHT))
#define WSL LCTL(LALT(KC_LEFT))
#define CALTDEL LCTL(LALT(KC_DEL))
#define _QWERTY 0
#define _FUNC 1


/* Qwerty
 * ,-----------------------.
 * |  WREF|   MUTE | VOLU  |
 * |-------+-------+-------|
 * |   COPY| PASTE | VOLD  |
 * |-------+-------+-------|
 * |  FUNC |  PSCR |  ENT  |
 * `-----------------------'
 */
[_QWERTY] = LAYOUT( \
  KC_WREF,   KC_MUTE, KC_VOLU, \
  KC_COPY,   KC_PSTE, KC_VOLD, \
  MO(_FUNC), KC_PSCR, KC_ENTER \
),


/* Function
 * ,-----------------------.
 * |       |       |CALDEL |
 * |-------+-------+-------|
 * |       |       |       |
 * |-------+-------+-------|
 * |  WSL  |  WSR  |   C   |
 * `-----------------------'
 */
[_FUNC] = LAYOUT( \
   _______, _______, CALTDEL, \
   _______, _______,      KC_C , \
   _______,WSL,     WSR   \
),

};

void matrix_init_user(void) {
}
