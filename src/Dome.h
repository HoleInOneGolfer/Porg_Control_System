#ifndef Dome

#include <Arduino.h>
#include <Servo.h>

// Dome Servo Pins
byte sideDoors_PINS[6] = {0, 0, 0, 0, 0, 0};
byte pieDoors_PINS[5] = {0, 0, 0, 0, 0};
byte HV1_PIN = 2;
byte HH1_PIN = 0;
byte HV2_PIN = 0;
byte HH2_PIN = 0;
byte HV3_PIN = 0;
byte HH3_PIN = 0;

// Pie Door Servos
Servo pieDoors[5];

// Side Door Servos
Servo sideDoors[6];

// Holoprojector Movement Servos
Servo HV1;
Servo HH1;
Servo HV2;
Servo HH2;
Servo HV3;
Servo HH3;

void initDome()
{
    for (int i = 0; i < 6; i++)
    {
        sideDoors[i].attach(sideDoors_PINS[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        pieDoors[i].attach(pieDoors_PINS[i]);
    }

    HV1.attach(HV1_PIN);
    HH1.attach(HH1_PIN);
    HV2.attach(HV2_PIN);
    HH2.attach(HH2_PIN);
    HV3.attach(HV3_PIN);
    HH3.attach(HH3_PIN);
}

#endif