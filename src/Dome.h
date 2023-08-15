#ifndef Dome
#pragma once

#include <Arduino.h>
#include <SoftwareSerial.h>
#include <Servo.h>

#include "Config.h"

namespace dome
{
    SoftwareSerial EYE_CAM(config::dome::EYE_CAM_RX_PIN, config::dome::EYE_CAM_TX_PIN); // Eye Camera Serial
    SoftwareSerial BODY_COM(config::dome::BODY_RX_PIN, config::dome::BODY_TX_PIN);      // Body Communication Serial

    Servo
        HH1, // Holoprojector 1 Horizontal Servo
        HV1, // Holoprojector 1 Vertical Servo
        HH2, // Holoprojector 2 Horizontal Servo
        HV2, // Holoprojector 2 Vertical Servo
        HH3, // Holoprojector 3 Horizontal Servo
        HV3, // Holoprojector 3 Vertical Servo
        PP1, // Pie Panel 1 Servo
        PP2, // Pie Panel 2 Servo
        PP3, // Pie Panel 3 Servo
        PP4, // Pie Panel 4 Servo
        PP5, // Pie Panel 5 Servo
        SP1, // Side Panel 1 Servo
        SP2, // Side Panel 2 Servo
        SP3, // Side Panel 3 Servo
        SP4, // Side Panel 4 Servo
        SP5, // Side Panel 5 Servo
        SP6; // Side Panel 6 Servo

    void setup()
    {
        EYE_CAM.begin(config::dome::EYE_CAM_BAUD_RATE);
        BODY_COM.begin(config::dome::BODY_BAUD_RATE);
    }

    void loop()
    {
    }
}

#endif