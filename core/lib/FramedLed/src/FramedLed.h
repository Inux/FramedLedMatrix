#include <FastLED.h>

class FramedLed {
public:
    FramedLed() = default;

    ~FramedLed() = default;

    void start();

    void update();

private:
    void setColor(CRGB color);

    void setColor(uint16_t x, uint16_t y, CRGB color);

    void render();

    CRGB correctColor(CRGB color);

    uint16_t getRandomNumber(uint16_t limit);
};
