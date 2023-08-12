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
const byte HL1_CNT = 7;
const byte HL2_CNT = 7;
const byte HL3_CNT = 7;
const byte RPSI_CNT = 21;
const byte FPSI_CNT = 21;
const byte FLD_CNT = 26 * 4;
const byte RLD_CNT = 2 * (5 * 9);

Servo SIDE_SERVOS[6], PIE_SERVOS[5], HV1_SERVO, HH1_SERVO, HV2_SERVO, HH2_SERVO, HV3_SERVO, HH3_SERVO;
Adafruit_NeoPixel HL1_STRIP, HL2_STRIP, HL3_STRIP, RPSI_STRIP, FPSI_STRIP, FLD_STRIP, RLD_STRIP;

void initDome()
{
    // assign pins
    for (byte i = 0; i < 6; i++)
    {
        SIDE_SERVOS[i].attach(SIDE_PINS[i]);
    }
    for (byte i = 0; i < 5; i++)
    {
        PIE_SERVOS[i].attach(PIE_PINS[i]);
    }
    HV1_SERVO.attach(HV1_PIN);
    HH1_SERVO.attach(HH1_PIN);
    HV2_SERVO.attach(HV2_PIN);
    HH2_SERVO.attach(HH2_PIN);
    HV3_SERVO.attach(HV3_PIN);
    HH3_SERVO.attach(HH3_PIN);

    HL1_STRIP = Adafruit_NeoPixel(HL1_CNT, HL1_PIN, NEO_GRB + NEO_KHZ800);
    HL2_STRIP = Adafruit_NeoPixel(HL2_CNT, HL2_PIN, NEO_GRB + NEO_KHZ800);
    HL3_STRIP = Adafruit_NeoPixel(HL3_CNT, HL3_PIN, NEO_GRB + NEO_KHZ800);
    RPSI_STRIP = Adafruit_NeoPixel(RPSI_CNT, RPSI_PIN, NEO_GRB + NEO_KHZ800);
    FPSI_STRIP = Adafruit_NeoPixel(FPSI_CNT, FPSI_PIN, NEO_GRB + NEO_KHZ800);
    FLD_STRIP = Adafruit_NeoPixel(FLD_CNT, FLD_PIN, NEO_GRB + NEO_KHZ800);
    RLD_STRIP = Adafruit_NeoPixel(RLD_CNT, RLD_PIN, NEO_GRB + NEO_KHZ800);
}

#endif