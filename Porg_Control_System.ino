#pragma once

#include <Arduino.h>

#include "src/Config.h"
#include "src/Tests/NeoTest.h"

NeoTest FLD = NeoTest(51, config::dome::RLD_CNT);

void setup()
{
    FLD.setup();
}

void loop()
{
    FLD.loop();
}
