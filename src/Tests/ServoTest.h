#ifndef ServoTest
#pragma once

#include <Arduino.h>
#include <Servo.h>

class ServoTest
{
public:
    int PIN;
    int DELAY = 100;
    Servo SERVO;
    ServoTest(int pin)
    {
        PIN = pin;
        SERVO.attach(PIN);
    }
    void loop()
    {
        SERVO.write(0);
        delay(DELAY);
    }
};

#endif