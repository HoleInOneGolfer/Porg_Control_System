#ifndef Config
#pragma once

#include <Arduino.h>

namespace config
{
    namespace dome
    {
        // Servos
        const byte HH1_PIN = 0; // Holoprojector Horizontal servo 1
        const byte HV1_PIN = 0; // Holoprojector Vertical servo 1
        const byte HH2_PIN = 0; // Holoprojector Horizontal servo 2
        const byte HV2_PIN = 0; // Holoprojector Vertical servo 2
        const byte HH3_PIN = 0; // Holoprojector Horizontal servo 3
        const byte HV3_PIN = 0; // Holoprojector Vertical servo 3
        const byte PP1_PIN = 0; // Pie Panel servo 1
        const byte PP2_PIN = 0; // Pie Panel servo 2
        const byte PP3_PIN = 0; // Pie Panel servo 3
        const byte PP4_PIN = 0; // Pie Panel servo 4
        const byte PP5_PIN = 0; // Pie Panel servo 5
        const byte SP1_PIN = 0; // Side Panel servo 1
        const byte SP2_PIN = 0; // Side Panel servo 2
        const byte SP3_PIN = 0; // Side Panel servo 3
        const byte SP4_PIN = 0; // Side Panel servo 4
        const byte SP5_PIN = 0; // Side Panel servo 5
        const byte SP6_PIN = 0; // Side Panel servo 6

        // Lights
        const byte HL1_PIN = 0;  // Holoprojector LED 1
        const byte HL2_PIN = 0;  // Holoprojector LED 2
        const byte HL3_PIN = 0;  // Holoprojector LED 3
        const byte RPSI_PIN = 0; // Rear PSI LED
        const byte FPSI_PIN = 0; // Front PSI LED
        const byte RLD_PIN = 0;  // Rear Logic Display LED
        const byte FLD_PIN = 0;  // Front Logic Display LED

        // Camera
        const byte EYE_CAM_RX_PIN = 0;         // Eye Camera RX
        const byte EYE_CAM_TX_PIN = 0;         // Eye Camera TX
        const byte EYE_CAM_BAUD_RATE = 115200; // Eye Camera Baud Rate

        // Body RX-TX
        const byte BODY_RX_PIN = 0;         // Body RX
        const byte BODY_TX_PIN = 0;         // Body TX
        const byte BODY_BAUD_RATE = 115200; // Body Baud Rate
    }

    namespace body
    {

    }
}

#endif