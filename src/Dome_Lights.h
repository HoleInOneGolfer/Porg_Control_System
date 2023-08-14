#ifndef Dome_Lights
#pragma once

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#include "Config.h"

namespace dome_lights
{
    // Lights
    Adafruit_NeoPixel HL1(config::dome::HL1_CNT, config::dome::HL1_PIN, NEO_GRB + NEO_KHZ800);    // Holoprojector Light 1
    Adafruit_NeoPixel HL2(config::dome::HL2_CNT, config::dome::HL2_PIN, NEO_GRB + NEO_KHZ800);    // Holoprojector Light 2
    Adafruit_NeoPixel HL3(config::dome::HL3_CNT, config::dome::HL3_PIN, NEO_GRB + NEO_KHZ800);    // Holoprojector Light 3
    Adafruit_NeoPixel RPSI(config::dome::RPSI_CNT, config::dome::RPSI_PIN, NEO_GRB + NEO_KHZ800); // Rear PSI Light
    Adafruit_NeoPixel FPSI(config::dome::FPSI_CNT, config::dome::FPSI_PIN, NEO_GRB + NEO_KHZ800); // Front PSI Light
    Adafruit_NeoPixel FLD(config::dome::FLD_CNT, config::dome::FLD_PIN, NEO_GRB + NEO_KHZ800);    // Front Logic Display
    Adafruit_NeoPixel RLD(config::dome::RLD_CNT, config::dome::RLD_PIN, NEO_GRB + NEO_KHZ800);    // Rear Logic Display

    Adafruit_NeoPixel LIGHTS[7] = {HL1, HL2, HL3, RPSI, FPSI, FLD, RLD}; // All lights

    void setup()
    {
        HL1.begin();
        HL2.begin();
        HL3.begin();
        RPSI.begin();
        FPSI.begin();
        FLD.begin();
        RLD.begin();
    }

    void loop()
    {
        HL1.show();
        HL2.show();
        HL3.show();
        RPSI.show();
        FPSI.show();
        FLD.show();
        RLD.show();
    }

    void processCommand(char *command)
    {
    }
} // namespace dome_lights

#endif