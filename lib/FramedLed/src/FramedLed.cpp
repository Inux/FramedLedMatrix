#include "FramedLed.h"
#include <stdlib.h>
#include <bits/stdc++.h>
#include "ColorPalette.h"

/* LED config: Pins, Chip and Color order */
const uint8_t dataPin = 4; // TODO:: Add to configuration
const uint8_t clkPin = 13; // TODO:: Add to configuration
const ESPIChipsets ledType = LPD8806;
const EOrder colorOrder = GRB;

/* LED config: rows and column definition */
const uint16_t columns = 8; // TODO:: Add to configuration
const uint16_t rows = 9; // TODO: Add to configuration
const uint16_t ledCount = columns * rows;
const int ledArrayLength = (ledCount + 1);

/* effective array used for writing the leds */
CRGB leds[ledArrayLength];

/* as rows and colums are supported a mapping is needed we use a x, y to index mapping */
uint16_t ledMatrix[columns][rows] = {};

float brightnessGlobal = 50; // in %

void FramedLed::start() {
    FastLED.addLeds<ledType, dataPin, clkPin, colorOrder>(leds, ledArrayLength);

    // Build the ledMatrix
    for (auto y = 0; y < rows; y++) {
        bool evenRow = ((y % 2) == 0);
        uint16_t remainingRows = rows - y;

        for (auto x = 0; x < columns; x++) {
            uint16_t remainingColumns = columns - x;

            uint16_t index = (remainingRows * columns);
            if (evenRow) {
                index -= remainingColumns;
            } else {
                index = index - x - 1;
            }

            ledMatrix[x][y] = index;
        }
    }
}

void FramedLed::update() {
    auto colorsLength = (sizeof(ColorPalette)/sizeof(*ColorPalette));
    auto randomColor = ColorPalette[getRandomNumber(colorsLength)];

//    for(auto i = 0; i < (ledCount/20); i++) {
//        auto x = getRandomNumber(columns);
//        auto y = getRandomNumber(rows);
//
//        setColor(x, y, color);
//    }
    auto sortedColors = ColorPalette;
    std::sort(sortedColors, sortedColors + colorsLength, std::greater<int>());

    for(auto x = 0; x < columns; x++) {
        for(auto y = 0; y < rows; y++) {
            auto c = sortedColors[(x+(y*columns))];
            setColor(x, y, c);
            render();
            delay(250);
        }
    }
}

// private functions

void FramedLed::setColor(CRGB color) {
    FastLED.showColor(correctColor(color));
}

void FramedLed::setColor(uint16_t x, uint16_t y, CRGB color) {
    leds[ledMatrix[x][y]] = correctColor(color);
}

void FramedLed::render() {
    FastLED.show();
}

CRGB FramedLed::correctColor(CRGB color) {
    CRGB actualColor;
    float factor = brightnessGlobal / 100;
    actualColor.r = color.r * factor;
    actualColor.g = color.g * factor;
    actualColor.b = color.b * factor;
    return actualColor;
}

uint16_t FramedLed::getRandomNumber(uint16_t limit) {
    int divisor = RAND_MAX/limit;
    uint16_t retVal;

    do {
        retVal = rand() / divisor;
    } while (retVal >= limit);

    return retVal;
}
