void processingus(char code[] = NULL);
void processingms(char code[] = NULL);

void setup() {
  Serial.begin(115200);
}

void loop() {
  delay(10);
  processingus();
}

void processingus(char code[] = NULL) {
  static uint32_t lastTime;
  Serial.print(micros() - lastTime);
  Serial.print(code);
  lastTime = micros();
}

void processingms(char code[] = NULL) {
  static uint32_t lastTime;
  Serial.print(millis() - lastTime);
  Serial.print(code);
  lastTime = millis();
}
