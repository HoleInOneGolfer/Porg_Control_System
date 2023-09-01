#ifndef ServoTest
#pragma once

#include <Arduino.h>
#include <Servo.h>

class ServoTest
{
public:
    int PIN;
    int ROTATION = 0;
    int DELAY = 100;
    Servo SERVO;
    ServoTest(int pin)
    {
        PIN = pin;
        SERVO.attach(PIN);
    }
    void loop()
    {
        SERVO.write(ROTATION);
        delay(DELAY);
        ROTATION = (ROTATION + 1) % 180;
    }
};

#endif