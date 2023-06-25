#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x3151
#define PRODUCT_ID      0x4010
#define DEVICE_VER      0x0001
#define PRODUCT         "EPOMAKER TH96 QMK"
#define MANUFACTURER    "TH96"


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 18

#define MATRIX_ROW_PINS { C7, C8, C9, A8, A10, A6 }
#define MATRIX_COL_PINS { C6, B15, B14, B1, B10, B13, A15, B4, C3, B6, B7, C13, B5, B3, D2, C12, C10, C11 }


#ifdef DIP_SWITCH_ENABLE
#define DIP_SWITCH_PINS { C4, A7 }
#endif

#ifdef ENCODER_ENABLE
#    define ENCODERS_PAD_A { C5 }
#    define ENCODERS_PAD_B { B0 }
#    define ENCODER_RESOLUTION 4
#endif

#define LED_CAPS_LOCK_PIN C2
#define LED_NUM_LOCK_PIN C1

#define DEBOUNCE    5

#define STM32_HSECLK 8000000

#define TAP_CODE_DELAY 50

#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP TRUE

#define RGB_DISABLE_WHEN_USB_SUSPENDED

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100

#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN        B8
#define I2C1_SDA_PIN        B9
#define I2C1_SCL_PAL_MODE   4
#define I2C1_SDA_PAL_MODE   4
#define I2C1_OPMODE	OPMODE_I2C
#define I2C1_CLOCK_SPEED	400000
#define I2C1_DUTY_CYCLE	FAST_DUTY_CYCLE_2

#define DRIVER_COUNT 2
#define DRIVER_ADDR_1 0b1010000
#define DRIVER_ADDR_2 0b1010011
#define DRIVER_1_LED_TOTAL 59
#define DRIVER_2_LED_TOTAL 36
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)
#define RGB_MATRIX_LED_COUNT (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

#ifdef VIA_ENABLE
#define VIA_QMK_RGBLIGHT_ENABLE
#endif

// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
// #define ENABLE_RGB_MATRIX_ALPHAS_MODS
// #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
// #define ENABLE_RGB_MATRIX_BAND_SAT
// #define ENABLE_RGB_MATRIX_BAND_VAL
// #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
// #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
// #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
// #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
// #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
// #define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
// #define ENABLE_RGB_MATRIX_HUE_BREATHING
// #define ENABLE_RGB_MATRIX_HUE_PENDULUM
// #define ENABLE_RGB_MATRIX_HUE_WAVE
// #define ENABLE_RGB_MATRIX_PIXEL_RAIN
// #define ENABLE_RGB_MATRIX_PIXEL_FLOW
// #define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
// #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH

// #define RGBLIGHT_LIMIT_VAL 150
// #    define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
// #    define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
// #    define RGB_MATRIX_KEYPRESSES
// #    define RGB_MATRIX_LED_PROCESS_LIMIT 4
// #    define RGB_MATRIX_LED_FLUSH_LIMIT 26
// // RGB Matrix Animation modes. Explicitly enabled
// // For full list of effects, see:
// // https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
// #    define ENABLE_RGB_MATRIX_ALPHAS_MODS
// #    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #    define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
// #    define ENABLE_RGB_MATRIX_BREATHING
// #    define ENABLE_RGB_MATRIX_BAND_SAT
// #    define ENABLE_RGB_MATRIX_BAND_VAL
// #    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
// #    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
// #    define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
// #    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
// #    define ENABLE_RGB_MATRIX_CYCLE_ALL
// #    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
// #    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
// #    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
// #    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
// #    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
// #    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
// #    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
// #    define ENABLE_RGB_MATRIX_DUAL_BEACON
// #    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
// #    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
// #    define ENABLE_RGB_MATRIX_RAINDROPS
// #    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
// #    define ENABLE_RGB_MATRIX_HUE_BREATHING
// #    define ENABLE_RGB_MATRIX_HUE_PENDULUM
// #    define ENABLE_RGB_MATRIX_HUE_WAVE
// #    define ENABLE_RGB_MATRIX_PIXEL_RAIN
// #    define ENABLE_RGB_MATRIX_PIXEL_FLOW
// #    define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// // enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
// #    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
// #    define ENABLE_RGB_MATRIX_DIGITAL_RAIN
// // enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
// // #    define ENABLE_RGB_MATRIX_SPLASH
// // #    define ENABLE_RGB_MATRIX_MULTISPLASH
// #    define ENABLE_RGB_MATRIX_SOLID_SPLASH
// // #    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
// #    define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_ALL

#ifdef VIA_ENABLE
#define VIA_QMK_RGBLIGHT_ENABLE
#endif
