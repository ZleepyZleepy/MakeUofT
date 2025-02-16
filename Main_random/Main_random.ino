bool gameOver = false;
int buzzer_Pin_1 = 9;
int buzzer_Pin_2 = 10;
int buzzer_Pin_3 = 11;
int buzzer_Pin_4 = 12;
int buzzer_Pin_5 = 13;
int buttonPin = 2;
int buttonState;
int i = 9;
int LED_pins[5] = {1,2,3,4,5};

int micPins[5] = {A0, A1, A2, A3, A4};
int micOutputs[5] = {0, 0, 0, 0, 0};
int maxOutput = 0;
int threshold = 900;

int randomNum = 0;
int points = 0;

void setup() {
  while (i < 14){
    pinMode(i, OUTPUT);
    i += 1;
  }
  randomSeed(analogRead(1));
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!gameOver) {
    randomNum = random(0,5);
    digitalWrite(LED_pins[randomNum], HIGH);
    delay(200);

    if (micPos() == randomNum) {
      if (randomNum == 0) {
        buzzer_1();
      }
      if (randomNum == 1) {
        buzzer_2();
      }
      if (randomNum == 2) {
        buzzer_3();
      }
      if (randomNum == 3) {
        buzzer_4();
      }
      if (randomNum == 4) {
        buzzer_5();
      }
      points++;
    } else {
      gameOver = true;
    }
  }
}


int micPos(bool checking) {
  if (checking) {
    
  }
}

void buzzer_1(){
  tone(buzzer_Pin_1, 440,200);
  delay(200);
  noTone(buzzer_Pin_1);
  //plays octave 4 A
}
void buzzer_2(){
  tone(buzzer_Pin_2,262, 200);
  delay(200);
  noTone(buzzer_Pin_2);
  //plays octave 4 c
}
void buzzer_3(){
  tone(buzzer_Pin_3, 330, 200);
  delay(200);
  noTone(buzzer_Pin_3);
  //plays octave 4 e
}
void buzzer_4(){
  tone(buzzer_Pin_4, 392, 200);
  delay(200);
  noTone(buzzer_Pin_4);
  //plays octave 4 G
}
void buzzer_5(){
  tone(buzzer_Pin_5, 294, 200);
  delay(200);
  noTone(buzzer_Pin_5);
  //plays octave 4 D
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

  // int[4] mn = {1024, 1024, 1024, 1024, 1024};
  // int[4] mx = {0, 0, 0, 0, 0};

  // for (int j = 0; j < 50; ++j) {
  //   for (int i = 0; i < 4; ++i) {
  //     int val = analogRead(micPins[i]);
  //     mn[i] = min(mn[i], val);
  //     mx[i] = max(mx[i], val);
  //   }
  // }

  // for (int i = 0; i < 4; ++i) {
  //     micOutputs[i] = mx[i] - mn[i];
  // }

  // maxOutput = max(max(max(micOutputs[0], micOutputs[1]), max(micOutputs[2], micOutputs[3])), micOutputs[5]);

  // if (maxOutput == micOutputs[0] && micOutputs[0] > threshold) {
  //   return 0;
  // } else if (maxOutput == micOutputs[1] && micOutputs[1] > threshold) {
  //   return 1;
  // } else if (maxOutput == micOutputs[2] && micOutputs[2] > threshold) {
  //   return 2;
  // } else if (maxOutput == micOutputs[3] && micOutputs[3] > threshold) {
  //   return 3;
  // } else if (maxOutput == micOutputs[4] && micOutputs[4] > threshold) {
  //   return 4;
  // } else {
  //   return 5;
  // }