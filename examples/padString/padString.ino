#include <string_asukiaaa.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  unsigned long nowMs = millis();
  Serial.println(string_asukiaaa::padStart(String(nowMs), 10, ' ') + "ms");
  Serial.println(string_asukiaaa::padEnd(String(nowMs), 10, ' ') + "ms");
  delay(500);
}
