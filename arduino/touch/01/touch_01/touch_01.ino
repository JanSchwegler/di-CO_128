#include <CapacitiveSensor.h>

// Create a capacitive sensor object with send pin 4 and receive pin 2
CapacitiveSensor cs_4_2 = CapacitiveSensor(4, 2);

void setup() {
  Serial.begin(9600); // Start serial communication for output
  cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF); // Disable auto-calibration for stable readings
}

void loop() {
  long sensorValue = cs_4_2.capacitiveSensor(30); // Take 30 samples for stability
  Serial.println(sensorValue); // Print the sensor value to the Serial Monitor
  //Serial.println("test");
  delay(10); // Small delay to make output readable
}
