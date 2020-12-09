#include "KeyboardDeEn.h"

void setup()
{
  Serial.begin(9600);
  delay(3000);
  Keyboard.begin();
}

void loop() {
  Keyboard_layout("de");
  Keyboard.println("DE: Erste Zeile\nZweite Zeile");
  Keyboard.println("\"%&/(){]");
  Keyboard.println("@ÄÜÖäüö");
  delay(3000);
  Keyboard_layout("en");
  Keyboard.println("EN: Erste Zeile\nZweite Zeile");
  Keyboard.println("\"%&/(){]");
  Keyboard.println("@ÄÜÖäüö");
  delay(3000);
}
