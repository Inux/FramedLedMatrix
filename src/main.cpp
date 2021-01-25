#include <FastLED.h>

const uint8_t dataPin = 4;
const uint8_t clkPin = 13;
const ESPIChipsets ledType = LPD8806;
const EOrder colorOrder = GRB;
const uint16_t ledCount = (8*9);

const int ledArrayLength = (ledCount + 1);
CRGB leds[ledArrayLength];

const uint8_t brightness = (uint8_t)(255 / 6);

void setup()
{
    FastLED.addLeds<ledType, dataPin, clkPin, colorOrder>(leds, ledArrayLength);
}

void setColor(CRGB color) {
    //FastLED.setBrightness(brightness);
    FastLED.showColor(color);
}

void loop()
{
    setColor(CRGB::Turquoise);
    delay(1000);

    setColor(CRGB::DarkOliveGreen);
    delay(1000);

    setColor(CRGB::MediumVioletRed);
    delay(1000);

    setColor(CRGB::LightGoldenrodYellow);
    delay(1000);

    setColor(CRGB::White);
    delay(1000);
}

int main(int argc, char** argv) {
    setup();
    loop();
}
