bool gameOver = false;
int buzzer_Pin_1 = 9;
int buzzer_Pin_2 = 10;
int buzzer_Pin_3 = 11;
int buzzer_Pin_4 = 12;
int buzzer_Pin_5 = 13;
int buttonPin = 2;
int buttonState;
int i = 9;
int LED_pins[5] = {6, 1, 2, 3, 4, 5};

int micPins[5] = {A0, A1, A2, A3, A4};
int micOutputs[5] = {0, 0, 0, 0, 0};
int maxOutput = 0;
int threshold = 200;

int freq[] = {0, 262, 294, 330, 349, 392}

int littleLamb[] = {3, 2, 1, 2, 3, 3, 3, 0, 2, 2, 2, 0, 3, 5, 5, 0, 3, 2, 1, 2, 3, 3, 3, 3, 2, 2, 3, 2, 1, 0, 0};
int odeJoy[] = {3, 3, 4, 5, 5, 4, 3, 2, 1, 1, 2, 3, 3, 2, 2, 0, 3, 3, 4, 5, 5, 4, 3, 2, 1, 1, 2, 3, 2, 1, 1, 0, 0};
int hotBuns[] = {3, 2, 1, 0, 3, 2, 1, 0, 3, 3, 3, 3, 2, 2, 2, 2, 3, 2, 1, 0, 0};

int songIndex = 0;
int freqIndex = 0;
int points = 0;

void setup() {
  while (i < 14){
    pinMode(i, OUTPUT);
    i += 1;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!gameOver) {
    freqIndex = littleLamb[songIndex];
    digitalWrite(LED_pins[freqIndex], HIGH);
    delay(200);

    if (micPos() == freqIndex) {
      buzz(littleLamb[songIndex]);
      points++;
    } else {
      gameOver = true;
    }
  }
}

int micPos() {
  int[4] mn = {1024, 1024, 1024, 1024, 1024};
  int[4] mx = {0, 0, 0, 0, 0};

  for (int j = 0; j < 50; ++j) {
    for (int i = 0; i < 4; ++i) {
      int val = analogRead(micPins[i]);
      mn[i] = min(mn[i], val);
      mx[i] = max(mx[i], val);
    }
  }

  for (int i = 0; i < 4; ++i) {
      micOutputs[i] = mx[i] - mn[i];
  }

  maxOutput = max(max(max(micOutputs[0], micOutputs[1]), max(micOutputs[2], micOutputs[3])), micOutputs[5]);

  if (maxOutput == micOutputs[0] && micOutputs[0] > threshold) {
    return 1;
  } else if (maxOutput == micOutputs[1] && micOutputs[1] > threshold) {
    return 2;
  } else if (maxOutput == micOutputs[2] && micOutputs[2] > threshold) {
    return 3;
  } else if (maxOutput == micOutputs[3] && micOutputs[3] > threshold) {
    return 4;
  } else if (maxOutput == micOutputs[4] && micOutputs[4] > threshold) {
    return 5;
  } else {
    return 0;
  }
}

void buzz(int freqIndex){
  tone(freqIndex, freq[freqIndex], 200);
  delay(200);
  noTone(freqIndex);
}

void warning(){
  int l = 1;
while (l<25){
   tone(buzzer_Pin_1, 1174, 200);
tone(buzzer_Pin_2, 1174, 200);
tone(buzzer_Pin_3, 1174, 200);
tone(buzzer_Pin_4, 1174, 200);
tone(buzzer_Pin_5, 1174, 200);
delay(50);
noTone(buzzer_Pin_1);
noTone(buzzer_Pin_2);
noTone(buzzer_Pin_3);
noTone(buzzer_Pin_4);
noTone(buzzer_Pin_5);
delay(50);
l += 1;
}