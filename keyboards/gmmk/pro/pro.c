/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>
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
#include "pro.h"

#ifdef ENCODER_ENABLE
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) {
        return false;
    }
    if (clockwise) {
        tap_code_delay(KC_VOLU, 10);
    } else {
        tap_code_delay(KC_VOLD, 10);
    }
    return false;
}
#endif

static uint16_t key_timer = 0;
static uint16_t timeout = 500;
static bool is_red = true;

#if defined(KEYBOARD_gmmk_pro_rev1_ansi)
static uint8_t indices[] = { 3, 67, 70, 73, 76, 80, 83, 87, 91 };
#elif defined(KEYBOARD_gmmk_pro_rev1_iso)
static uint8_t indices[] = { 3, 68, 71, 74, 77, 81, 84, 88, 92 };
#endif

void set_indicator_leds(uint8_t red, uint8_t green, uint8_t blue) {
    for (uint8_t i = 0; i < 9; i++) {
        rgb_matrix_set_color(indices[i], red, green, blue);
    }
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        if (is_red) {
            set_indicator_leds(RGB_RED);
        } else {
            set_indicator_leds(RGB_OFF);
        }

        if (timer_elapsed(key_timer) > timeout) {
            key_timer = timer_read();
            is_red = !is_red;
        }
    } else {
        key_timer = timer_read();
        is_red = true;
    }
    return false;
}

