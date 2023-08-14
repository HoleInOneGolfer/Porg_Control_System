#ifndef Dome
#pragma once

#include <Arduino.h>
#include <Servo.h>
#include <Adafruit_NeoPixel.h>
#include <SoftwareSerial.h>

#include "Dome_Lights.h"
#include "Dome_Servos.h"
#include "Dome_Camera.h"

namespace dome
{
    SoftwareSerial serial(config::dome::RX_PIN, config::dome::TX_PIN);

    void setup()
    {
        serial.begin(9600);
        Serial3.begin(9600);

        dome_lights::setup();
        dome_servos::setup();
        dome_camera::setup();
    }

    void loop()
    {
        dome_lights::loop();
        dome_servos::loop();
        dome_camera::loop();

        if (serial.available())
        {
            char command[64];
            serial.readBytesUntil('\n', command, 64);
            processCommand(command);
        }
        else if (Serial3.available())
        {
            char command[64];
            Serial3.readBytesUntil('\n', command, 64);
            processCommand(command);
        }
    }

    void processCommand(char *command)
    {
    }

}

#endif