int micPins[5] = {A0, A1, A2, A3, A4};
int threshold = 900;

void setup() {
  Serial.begin(9600);
  digitalWrite(1, LOW);
}

void loop() {
  for (int i = 0; i < 4; i++) {
    int pos = micPos();
    if (pos != 5) {
      // Serial.print(pos);
    }
    }
    delay(200);

  }


int micPos() {
  if (true) {
    for (int i = 0; i < 5; i++) {
      if (i == 0) {
          Serial.println(i);
          Serial.println(analogRead(micPins[i]));
      }
      if (analogRead(micPins[i]) >= threshold) {
        return i;
      }
    }
    return 5;
  }
}