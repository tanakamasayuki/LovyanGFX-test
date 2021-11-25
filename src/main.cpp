#include <Arduino.h>
#define LGFX_USE_V1
#include <LovyanGFX.hpp>

#define LGFX_AUTODETECT
#include <LGFX_AUTODETECT.hpp>

static LGFX lcd;

void setup() {
  lcd.init();
  lcd.fillScreen(TFT_RED);
}

void loop() {
}