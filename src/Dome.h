#ifndef Dome

#include <Arduino.h>
#include <Servo.h>
#include <Adafruit_NeoPixel.h>

// =============== CONFIG ===============
// Servo Pins
byte SIDE_PINS[6] = {0, 0, 0, 0, 0, 0};
byte PIE_PINS[5] = {0, 0, 0, 0, 0};
byte HV1_PIN = 0;
byte HH1_PIN = 0;
byte HV2_PIN = 0;
byte HH2_PIN = 0;
byte HV3_PIN = 0;
byte HH3_PIN = 0;

// Light Pins
byte HL1_PIN = 0;
byte HL2_PIN = 0;
byte HL3_PIN = 0;
byte RPSI_PIN = 0;
byte FPSI_PIN = 0;
byte FLD_PIN = 0;
byte RLD_PIN = 0;

// Light Strip Counts
byte HL1_CNT = 0;
byte HL2_CNT = 0;
byte HL3_CNT = 0;
byte RPSI_CNT = 0;
byte FPSI_CNT = 0;
byte FLD_CNT = 0;
byte RLD_CNT = 0;

#endif