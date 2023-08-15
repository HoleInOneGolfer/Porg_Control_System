#ifndef NeoTest
#pragma once

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

class NeoTest
{
public:
    int PIN;
    int COUNT;
    int CURRENT = 0;
    int DELAY = 500;
    Adafruit_NeoPixel NEOPIXELS;
    NeoTest(int pin, int count)
    {
        PIN = pin;
        COUNT = count;
    }

    void setup()
    {
        NEOPIXELS = Adafruit_NeoPixel(COUNT, PIN, NEO_GRB + NEO_KHZ800);
        NEOPIXELS.begin();

        for (int i = 0; i < COUNT; i++)
        {
            NEOPIXELS.setPixelColor(i, 0, 0, 0);
        }
    }

    void loop()
    {
        NEOPIXELS.setBrightness(10);
        NEOPIXELS.setPixelColor(0, 255, 0, 0);
        NEOPIXELS.setPixelColor(COUNT - 1, 0, 255, 0);
        NEOPIXELS.setPixelColor(CURRENT, 255, 255, 255);
        NEOPIXELS.show();
        delay(DELAY);
        NEOPIXELS.setPixelColor(CURRENT, 0, 0, 0);
        CURRENT++;
        if (CURRENT >= COUNT)
        {
            CURRENT = 0;
        }
    }
};

#endif