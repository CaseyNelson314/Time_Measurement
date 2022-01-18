void setup() {
  Serial.begin(115200);
}

void loop() {
  delay(10);
  processingus("\n");
}

void processingus(char code[]) {
  static uint32_t lastTime;
  Serial.print(micros() - lastTime);
  Serial.print(ln);
  lastTime = micros();
}

void processingms(char code[]) {
  static uint32_t lastTime;
  Serial.print(millis() - lastTime);
  Serial.print(ln);
  lastTime = millis();
}
