/***************************************************
 Home Automation System using IoT (Blynk Platform)
 Internship Task - 2
 Organization: CODTECH
 College: Pravara Rural Engineering College, Loni
 ***************************************************/

#define BLYNK_PRINT Serial

#include <BlynkSimpleEsp8266.h>

// Virtual pins for devices
// V0 -> Light
// V1 -> Fan

BLYNK_WRITE(V0) {
  int lightState = param.asInt();

  if (lightState == 1) {
    Serial.println("Light is ON");
  } else {
    Serial.println("Light is OFF");
  }
}

BLYNK_WRITE(V1) {
  int fanState = param.asInt();

  if (fanState == 1) {
    Serial.println("Fan is ON");
  } else {
    Serial.println("Fan is OFF");
  }
}

void setup() {
  Serial.begin(9600);
  Serial.println("Home Automation System Initialized");
  Serial.println("Using Blynk IoT Platform");
}

void loop() {
  Blynk.run();
}
