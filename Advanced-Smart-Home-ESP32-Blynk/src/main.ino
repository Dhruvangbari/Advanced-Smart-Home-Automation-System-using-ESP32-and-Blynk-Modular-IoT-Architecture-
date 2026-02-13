#include <Arduino.h>
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include "config.h"
#include "relay_control.h"
#include "wifi_manager.h"

BLYNK_WRITE(V0){ setRelay(0, param.asInt()); }
BLYNK_WRITE(V1){ setRelay(1, param.asInt()); }
BLYNK_WRITE(V2){ setRelay(2, param.asInt()); }
BLYNK_WRITE(V3){ setRelay(3, param.asInt()); }

void setup() {
  Serial.begin(9600);
  initRelays();
  connectWiFiAndBlynk();
}

void loop() {
  Blynk.run();
}
