/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#ifndef OSFRD_BOARD_CONFIG_H_
#define OSFRD_BOARD_CONFIG_H_

#include <vector>
#include <GamepadEnums.h>
#include <GamepadState.h>
#include "Pixel.hpp"

#define PIN_DPAD_UP     20
#define PIN_DPAD_DOWN   8
#define PIN_DPAD_LEFT   1
#define PIN_DPAD_RIGHT  14
#define PIN_BUTTON_B1   18
#define PIN_BUTTON_B2   17
#define PIN_BUTTON_B3   13
#define PIN_BUTTON_B4   9
#define PIN_BUTTON_L1   12
#define PIN_BUTTON_R1   10
#define PIN_BUTTON_L2   19
#define PIN_BUTTON_R2   16
#define PIN_BUTTON_S1   3
#define PIN_BUTTON_S2   0
#define PIN_BUTTON_L3   6
#define PIN_BUTTON_R3   7
#define PIN_BUTTON_A1   4
#define PIN_BUTTON_A2   5
#define PIN_SETTINGS    11

#define DEFAULT_SOCD_MODE SOCD_MODE_NEUTRAL

#define BOARD_LEDS_PIN 2

#define LED_BRIGHTNESS_MAXIMUM 100
#define LED_BRIGHTNESS_STEPS 5
#define LED_FORMAT LED_FORMAT_GRB
#define LED_LAYOUT LED_LAYOUT_ARCADE_HITBOX
#define LEDS_PER_PIXEL 1

#define LEDS_DPAD_LEFT   0
#define LEDS_DPAD_DOWN   1
#define LEDS_DPAD_RIGHT  2
#define LEDS_DPAD_UP     3
#define LEDS_BUTTON_B3   4
#define LEDS_BUTTON_B4   5
#define LEDS_BUTTON_R1   6
#define LEDS_BUTTON_L1   7
#define LEDS_BUTTON_B1   8
#define LEDS_BUTTON_B2   9
#define LEDS_BUTTON_R2   10
#define LEDS_BUTTON_L2   11

#endif
