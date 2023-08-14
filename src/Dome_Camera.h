#ifndef Dome_Camera
#pragma once

#include <Arduino.h>

#include "Config.h"

namespace dome_camera
{
    SoftwareSerial CAMERA = SoftwareSerial(config::dome::DOME_EYE_CAM_RX_PIN, config::dome::DOME_EYE_CAM_TX_PIN); // Camera in Dome Eye

    void setup()
    {
    }

    void loop()
    {
    }

    void processCommand(char *command)
    {
    }
}

#endif