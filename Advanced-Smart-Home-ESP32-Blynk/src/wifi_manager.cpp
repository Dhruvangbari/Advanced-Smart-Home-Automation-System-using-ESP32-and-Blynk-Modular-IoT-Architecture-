#include <Arduino.h>
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include "config.h"
#include "wifi_manager.h"

void connectWiFiAndBlynk() {
  Blynk.begin(auth, ssid, pass);
}
