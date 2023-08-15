#ifndef Dome
#pragma once

#include <Arduino.h>
#include <SoftwareSerial.h>
#include <Servo.h>
#include <Adafruit_NeoPixel.h>

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

    Servo SERVOS[] = {HH1, HV1, HH2, HV2, HH3, HV3, PP1, PP2, PP3, PP4, PP5, SP1, SP2, SP3, SP4, SP5, SP6};

    Adafruit_NeoPixel
        HL1(config::dome::HL1_CNT, config::dome::HL1_PIN, NEO_GRB + NEO_KHZ800),
        HL2(config::dome::HL2_CNT, config::dome::HL2_PIN, NEO_GRB + NEO_KHZ800),
        HL3(config::dome::HL3_CNT, config::dome::HL3_PIN, NEO_GRB + NEO_KHZ800),
        RPSI(config::dome::RPSI_CNT, config::dome::RPSI_PIN, NEO_GRB + NEO_KHZ800),
        FPSI(config::dome::FPSI_CNT, config::dome::FPSI_PIN, NEO_GRB + NEO_KHZ800),
        RLD(config::dome::RLD_CNT, config::dome::RLD_PIN, NEO_GRB + NEO_KHZ800),
        FLD(config::dome::FLD_CNT, config::dome::FLD_PIN, NEO_GRB + NEO_KHZ800);

    Adafruit_NeoPixel PIXELS[] = {HL1, HL2, HL3, RPSI, FPSI, RLD, FLD};

    void setup()
    {
        EYE_CAM.begin(config::dome::EYE_CAM_BAUD_RATE);
        BODY_COM.begin(config::dome::BODY_BAUD_RATE);

        HH1.attach(config::dome::HH1_PIN);
        HV1.attach(config::dome::HV1_PIN);
        HH2.attach(config::dome::HH2_PIN);
        HV2.attach(config::dome::HV2_PIN);
        HH3.attach(config::dome::HH3_PIN);
        HV3.attach(config::dome::HV3_PIN);
        PP1.attach(config::dome::PP1_PIN);
        PP2.attach(config::dome::PP2_PIN);
        PP3.attach(config::dome::PP3_PIN);
        PP4.attach(config::dome::PP4_PIN);
        PP5.attach(config::dome::PP5_PIN);
        SP1.attach(config::dome::SP1_PIN);
        SP2.attach(config::dome::SP2_PIN);
        SP3.attach(config::dome::SP3_PIN);
        SP4.attach(config::dome::SP4_PIN);
        SP5.attach(config::dome::SP5_PIN);
        SP6.attach(config::dome::SP6_PIN);

        HL1.begin();
        HL2.begin();
        HL3.begin();
        RPSI.begin();
        FPSI.begin();
        RLD.begin();
        FLD.begin();
    }

    void loop()
    {
        HL1.show();
        HL2.show();
        HL3.show();
        RPSI.show();
        FPSI.show();
        RLD.show();
        FLD.show();
    }
}

#endif