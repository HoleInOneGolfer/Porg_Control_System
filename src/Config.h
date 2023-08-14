#ifndef Config
#pragma once

#include <Arduino.h>
namespace config
{
    namespace dome
    {
        const byte HV1_PIN = 0;   // Pin for the Holoprojector Vertical 1
        const byte HH1_PIN = 0;   // Pin for the Holoprojector Horizontal 1
        const byte HV2_PIN = 0;   // Pin for the Holoprojector Vertical 2
        const byte HH2_PIN = 0;   // Pin for the Holoprojector Horizontal 2
        const byte HV3_PIN = 0;   // Pin for the Holoprojector Vertical 3
        const byte HH3_PIN = 0;   // Pin for the Holoprojector Horizontal 3
        const byte SIDE1_PIN = 0; // Pin for the Side Panel 1
        const byte SIDE2_PIN = 0; // Pin for the Side Panel 2
        const byte SIDE3_PIN = 0; // Pin for the Side Panel 3
        const byte SIDE4_PIN = 0; // Pin for the Side Panel 4
        const byte SIDE5_PIN = 0; // Pin for the Side Panel 5
        const byte SIDE6_PIN = 0; // Pin for the Side Panel 6
        const byte PIE1_PIN = 0;  // Pin for the Pie Panel 1
        const byte PIE2_PIN = 0;  // Pin for the Pie Panel 2
        const byte PIE3_PIN = 0;  // Pin for the Pie Panel 3
        const byte PIE4_PIN = 0;  // Pin for the Pie Panel 4
        const byte PIE5_PIN = 0;  // Pin for the Pie Panel 5

        const byte HL1_PIN = 0;  // Pin for the Holoprojector Light 1
        const byte HL2_PIN = 0;  // Pin for the Holoprojector Light 2
        const byte HL3_PIN = 0;  // Pin for the Holoprojector Light 3
        const byte RPSI_PIN = 0; // Pin for the Rear PSI
        const byte FPSI_PIN = 0; // Pin for the Front PSI
        const byte FLD_PIN = 0;  // Pin for the Front Logic Display
        const byte RLD_PIN = 0;  // Pin for the Rear Logic Display

        const byte DOME_EYE_CAM_TX_PIN = 0; // Pin for the Dome Camera TX
        const byte DOME_EYE_CAM_RX_PIN = 0; // Pin for the Dome Camera RX

        const byte TX_PIN = 0; // Pin for the TX
        const byte RX_PIN = 0; // Pin for the RX

        const byte HL1_CNT = 7;   // Number of LEDS on the Holoprojector 1 Light
        const byte HL2_CNT = 7;   // Number of LEDS on the Holoprojector 2 Light
        const byte HL3_CNT = 7;   // Number of LEDS on the Holoprojector 3 Light
        const byte RPSI_CNT = 21; // Number of LEDS on the Rear PSI Light
        const byte FPSI_CNT = 21; // Number of LEDS on the Front PSI Light
        const byte FLD_CNT = 104; // Number of LEDS on the Front Logic Display Light
        const byte RLD_CNT = 90;  // Number of LEDS on the Rear Logic Display Light
    }
}
#endif