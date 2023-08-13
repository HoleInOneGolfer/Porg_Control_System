#ifndef Dome

#include <Arduino.h>
#include <Servo.h>
#include <Adafruit_NeoPixel.h>

#include <map>

// =============== CONFIG ===============
// Servo Pins
const std::map<String, byte> DOME_SERVO_PINS = {
    {"HV1", 0},
    {"HH1", 0},
    {"HV2", 0},
    {"HH2", 0},
    {"HV3", 0},
    {"HH3", 0},
    {"SIDE1", 0},
    {"SIDE2", 0},
    {"SIDE3", 0},
    {"SIDE4", 0},
    {"SIDE5", 0},
    {"SIDE6", 0},
    {"PIE1", 0},
    {"PIE2", 0},
    {"PIE3", 0},
    {"PIE4", 0},
    {"PIE5", 0},
};

// Light Pins
const std::map<String, byte> DOME_LIGHT_PINS = {
    {"HL1", 0},
    {"HL2", 0},
    {"HL3", 0},
    {"RPSI", 0},
    {"FPSI", 0},
    {"FLD", 0},
    {"RLD", 0},
};

// Light Strip Counts
const byte HL1_CNT = 7;
const byte HL2_CNT = 7;
const byte HL3_CNT = 7;
const byte RPSI_CNT = 21;
const byte FPSI_CNT = 21;
const byte FLD_CNT = 26 * 4;
const byte RLD_CNT = 2 * (5 * 9);

// =============== OBJECTS ===============
std::map<String, Servo> DOME_SERVOS;
std::map<String, Adafruit_NeoPixel> DOME_LIGHTS;

void initDome()
{
    // Initialize Servos
    for (auto const &[name, pin] : DOME_SERVO_PINS)
    {
        Servo servo;
        servo.attach(pin);
        DOME_SERVOS[name] = servo;
    }

    // Initialize Lights
    for (auto const &[name, pin] : DOME_LIGHT_PINS)
    {
        Adafruit_NeoPixel strip;
        strip = Adafruit_NeoPixel(0, pin, NEO_GRB + NEO_KHZ800);
        DOME_LIGHTS[name] = strip;
    }
}

#endif