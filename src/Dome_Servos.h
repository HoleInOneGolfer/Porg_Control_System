#ifndef Dome_Servos
#pragma once

#include <Arduino.h>
#include <Servo.h>

#include "Config.h"

namespace dome_servos
{
    Servo HV1 = Servo();   // Holoprojector Vertical 1
    Servo HH1 = Servo();   // Holoprojector Horizontal 1
    Servo HV2 = Servo();   // Holoprojector Vertical 2
    Servo HH2 = Servo();   // Holoprojector Horizontal 2
    Servo HV3 = Servo();   // Holoprojector Vertical 3
    Servo HH3 = Servo();   // Holoprojector Horizontal 3
    Servo SIDE1 = Servo(); // Side Panel 1
    Servo SIDE2 = Servo(); // Side Panel 2
    Servo SIDE3 = Servo(); // Side Panel 3
    Servo SIDE4 = Servo(); // Side Panel 4
    Servo SIDE5 = Servo(); // Side Panel 5
    Servo SIDE6 = Servo(); // Side Panel 6
    Servo PIE1 = Servo();  // Pie Panel 1
    Servo PIE2 = Servo();  // Pie Panel 2
    Servo PIE3 = Servo();  // Pie Panel 3
    Servo PIE4 = Servo();  // Pie Panel 4
    Servo PIE5 = Servo();  // Pie Panel 5

    Servo SERVOS[17] = {HV1, HH1, HV2, HH2, HV3, HH3, SIDE1, SIDE2, SIDE3, SIDE4, SIDE5, SIDE6, PIE1, PIE2, PIE3, PIE4, PIE5}; // All servos

    void setup()
    {
        HV1.attach(config::dome::HV1_PIN);
        HH1.attach(config::dome::HH1_PIN);
        HV2.attach(config::dome::HV2_PIN);
        HH2.attach(config::dome::HH2_PIN);
        HV3.attach(config::dome::HV3_PIN);
        HH3.attach(config::dome::HH3_PIN);
        SIDE1.attach(config::dome::SIDE1_PIN);
        SIDE2.attach(config::dome::SIDE2_PIN);
        SIDE3.attach(config::dome::SIDE3_PIN);
        SIDE4.attach(config::dome::SIDE4_PIN);
        SIDE5.attach(config::dome::SIDE5_PIN);
        SIDE6.attach(config::dome::SIDE6_PIN);
        PIE1.attach(config::dome::PIE1_PIN);
        PIE2.attach(config::dome::PIE2_PIN);
        PIE3.attach(config::dome::PIE3_PIN);
        PIE4.attach(config::dome::PIE4_PIN);
        PIE5.attach(config::dome::PIE5_PIN);
    }

    void loop()
    {
    }

    void processCommand(char *command)
    {
    }
}

#endif