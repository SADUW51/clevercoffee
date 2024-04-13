/**
 * @file GPIOPin.h
 *
 * @brief A physical switch connected to a GPIO Pin
 */

#pragma once

#include <cstdint>

#include "Switch.h"

class GPIOPin;

class IOSwitch : public Switch {
    public:
        IOSwitch(GPIOPin& gpioInstance, Type type = MOMENTARY, Mode mode = NORMALLY_OPEN);

        bool isPressed() override;
        bool longPressDetected() override;
        GPIOPin& getGPIOInstance();

    private:
        GPIOPin& gpio;
        uint8_t lastState;
        uint8_t currentState;
        unsigned long lastDebounceTime;
        unsigned long lastStateChangeTime;
        unsigned long pressStartTime;
        bool longPressTriggered;

        const unsigned long debounceDelay;
        const unsigned long longPressDuration;
};
