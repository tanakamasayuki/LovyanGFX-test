#include <Arduino.h>
#include <unity.h>

#define LGFX_USE_V1
#include <LovyanGFX.hpp>

#define LGFX_AUTODETECT
#include <LGFX_AUTODETECT.hpp>

#include <lgfx_user/M5UnitOLED.hpp>

static LGFX lcd;

void test0()
{
    TEST_ASSERT_TRUE(true);
}

void setup()
{
    lcd.init();
    lcd.fillScreen(TFT_RED);

    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);
    UNITY_BEGIN();
    RUN_TEST(test0);
    UNITY_END();

    lcd.fillScreen(TFT_BLUE);
}

void loop()
{
}