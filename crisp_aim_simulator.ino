#include <Mouse.h>

const int aimButtonPin = 2;

int aimButtonState = 0;
int lastAimState = LOW;
long lastDebounceTime = 0;
long debounceDelay = 50;

void setup() {
  pinMode(aimButtonPin, INPUT);
  Mouse.begin();
}

void loop() {
  int reading = digitalRead(aimButtonPin);

  if (reading != lastAimState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != aimButtonState) {
      aimButtonState = reading;

      if (aimButtonState == HIGH) {
        smoothMouseMove(30, 0);
        delay(500);
      }
    }
  }

  lastAimState = reading;
}

void smoothMouseMove(int deltaX, int deltaY) {
  int steps = 15;
  int stepX = deltaX / steps;
  int stepY = deltaY / steps;

  for (int i = 0; i < steps; i++) {
    Mouse.move(stepX, stepY);
    delay(8);
  }
}
