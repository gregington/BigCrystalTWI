#include <Wire.h>
#include <LiquidTWI.h>
#include <BigCrystalTWI.h>

// Set up according to your LCD pins
BigCrystalTWI lcd(0);

void setup() {
  lcd.begin(20, 4);

  lcd.printBig("10:22", 0, 0);
}

void loop() {
}
