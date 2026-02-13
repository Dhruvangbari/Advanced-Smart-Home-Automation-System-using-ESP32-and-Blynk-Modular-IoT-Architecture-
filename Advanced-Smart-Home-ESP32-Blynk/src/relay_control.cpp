#include <Arduino.h>
#include "config.h"
#include "relay_control.h"

const int RELAYS[4] = {RELAY1, RELAY2, RELAY3, RELAY4};

void initRelays() {
  for (int i = 0; i < 4; i++) {
    pinMode(RELAYS[i], OUTPUT);
    digitalWrite(RELAYS[i], LOW);
  }
}

void setRelay(int index, int state) {
  if (index < 0 || index > 3) return;
  digitalWrite(RELAYS[index], state);
}
