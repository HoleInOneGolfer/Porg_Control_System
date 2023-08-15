#pragma once

#include <Arduino.h>

#include "src/Dome.h"

void setup()
{
    Serial.begin(115200);

    dome::setup();
}

void loop()
{
    if (Serial.available())
    {
        String command = Serial.readStringUntil('\n');
        Serial.println(command);
    }
}
