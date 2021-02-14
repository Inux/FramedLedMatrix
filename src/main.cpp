#include <Env.h>
#include <FastLED.h>
#include <ESP8266WiFi.h>

/* LED configuration */
const uint8_t dataPin = 4;
const uint8_t clkPin = 13;
const ESPIChipsets ledType = LPD8806;
const EOrder colorOrder = GRB;
const uint16_t ledCount = (8*9);
const int ledArrayLength = (ledCount + 1);
CRGB leds[ledArrayLength];

float brightnessGlobal = 25; // in %

void setup()
{
    FastLED.addLeds<ledType, dataPin, clkPin, colorOrder>(leds, ledArrayLength);

    WiFi.hostname(Env::getHostname().c_str());
    WiFi.mode(WIFI_STA);
    WiFi.begin(Env::getWiFiClientSsid().c_str(), Env::getWiFiClientPw().c_str());
    if (WiFi.waitForConnectResult() != WL_CONNECTED) {
        WiFi.mode(WIFI_AP_STA);
        WiFi.begin(Env::getWiFiStaSsid().c_str(), Env::getWiFiStaPw().c_str());
        return;
    }
}

void setColor(CRGB color) {
    CRGB actualColor;
    float factor = brightnessGlobal / 100;
    actualColor.r = color.r * factor;
    actualColor.g = color.g * factor;
    actualColor.b = color.b * factor;
    FastLED.showColor(actualColor);
}

void loop()
{
    brightnessGlobal = 25;
    setColor(CRGB::LightGoldenrodYellow);
    delay(1000);

    brightnessGlobal = 75;
    setColor(CRGB::LightGoldenrodYellow);
    delay(1000);
}
