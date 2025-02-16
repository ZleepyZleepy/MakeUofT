int micPins[5] = {A0, A1, A2, A3, A4};
bool checked = false;
int threshold = 900;

void setup() {
  Serial.begin(9600);
  digitalWrite(1, LOW);
}

void loop() {
  for (int i = 0; i < 4; i++) {
    int pos = micPos(&checked);
    if (pos != 5) {
      // Serial.print(pos);
    }
    }
    delay(200);
    if (checked) {
      checked = false;
  }
  }


int micPos(bool *checked) {
  if (!*checked) {
    for (int i = 0; i < 5; i++) {
      if (i == 0) {
          Serial.println(i);
          Serial.println(analogRead(micPins[i]));
      }
      if (analogRead(micPins[i]) >= threshold) {
        *checked = false;
        return i;
      }
    }
    return 5;
  }
}