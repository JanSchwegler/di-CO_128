#include <Wire.h>
#include "Adafruit_MPR121.h"

Adafruit_MPR121 cap = Adafruit_MPR121();

void setup() {
  Serial.begin(9600);
  while (!Serial) delay(10); // For Leonardo/Micro

  Serial.println("Adafruit MPR121 Capacitive Touch sensor test");

  if (!cap.begin(0x5A)) {
    Serial.println("MPR121 not found, check wiring?");
    while (1);
  }
  Serial.println("MPR121 found!");
}

void loop() {
  uint16_t currtouched = cap.touched();
  for (uint8_t i = 0; i < 12; i++) {
    if (currtouched & (1 << i)) {
      Serial.print(i); Serial.println(" touched");
    }
  }
  delay(100);
}
