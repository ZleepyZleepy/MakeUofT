int buzzer_Pin_1 = 9;
int buzzer_Pin_2 = 10;
int buzzer_Pin_3 = 11;
int buzzer_Pin_4 = 12;
int buzzer_Pin_5 = 13;
int buttonPin = 2;
int buttonState;
int LED_pin1 = 1;
int LED_pin2 = 2;
int LED_pin3 = 3;
int LED_pin4 = 4;
int LED_pin5 = 5;
//int delayTime = 500;
int i =9;
int j =1;
int position = 0;
void setup() {
  while (i < 14){
    pinMode(i, OUTPUT);
    i += 1;


  }
  while (j<6){
    pinMode(j, OUTPUT);
    j += 1;
  }
randomSeed(analogRead(1));

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
void mistake(){
tone(buzzer_Pin_1, 114, 200);
tone(buzzer_Pin_2, 1174, 200);
tone(buzzer_Pin_3, 432, 200);
tone(buzzer_Pin_4, 243, 200);
tone(buzzer_Pin_5, 546, 200);
delay(20);
noTone(buzzer_Pin_1);
noTone(buzzer_Pin_2);
noTone(buzzer_Pin_3);
noTone(buzzer_Pin_4);
noTone(buzzer_Pin_5);
delay(200);

tone(buzzer_Pin_1, 114, 2000);
tone(buzzer_Pin_2, 1174, 2000);
tone(buzzer_Pin_3, 432, 2000);
tone(buzzer_Pin_4, 243, 2000);
tone(buzzer_Pin_5, 546, 2000);
delay(2000);
noTone(buzzer_Pin_1);
noTone(buzzer_Pin_2);
noTone(buzzer_Pin_3);
noTone(buzzer_Pin_4);
noTone(buzzer_Pin_5);
delay(200);
}
void warning(){
  int l = 1;
while (l<5){
   tone(buzzer_Pin_1, 1174, 200);
tone(buzzer_Pin_2, 1174, 200);
tone(buzzer_Pin_3, 1174, 200);
tone(buzzer_Pin_4, 1174, 200);
tone(buzzer_Pin_5, 1174, 200);
delay(20);
noTone(buzzer_Pin_1);
noTone(buzzer_Pin_2);
noTone(buzzer_Pin_3);
noTone(buzzer_Pin_4);
noTone(buzzer_Pin_5);
delay(20);
l += 1;
}
//   tone(buzzer_Pin_1, 1174, 200);
// tone(buzzer_Pin_2, 1174, 200);
// tone(buzzer_Pin_3, 1174, 200);
// tone(buzzer_Pin_4, 1174, 200);
// tone(buzzer_Pin_5, 1174, 200);
// delay(20);
// noTone(buzzer_Pin_1);
// noTone(buzzer_Pin_2);
// noTone(buzzer_Pin_3);
// noTone(buzzer_Pin_4);
// noTone(buzzer_Pin_5);
// delay(20);

// tone(buzzer_Pin_1, 1174, 2000);
// tone(buzzer_Pin_2, 1174, 2000);
// tone(buzzer_Pin_3, 1174, 2000);
// tone(buzzer_Pin_4, 1174, 2000);
// tone(buzzer_Pin_5, 1174, 2000);
// delay(20);
// noTone(buzzer_Pin_1);
// noTone(buzzer_Pin_2);
// noTone(buzzer_Pin_3);
// noTone(buzzer_Pin_4);
// noTone(buzzer_Pin_5);
// delay(20);

//  tone(buzzer_Pin_1, 1174, 200);
// tone(buzzer_Pin_2, 1174, 200);
// tone(buzzer_Pin_3, 1174, 200);
// tone(buzzer_Pin_4, 1174, 200);
// tone(buzzer_Pin_5, 1174, 200);
// delay(20);
// noTone(buzzer_Pin_1);
// noTone(buzzer_Pin_2);
// noTone(buzzer_Pin_3);
// noTone(buzzer_Pin_4);
// noTone(buzzer_Pin_5);
// delay(20);

// tone(buzzer_Pin_1, 1174, 2000);
// tone(buzzer_Pin_2, 1174, 2000);
// tone(buzzer_Pin_3, 1174, 2000);
// tone(buzzer_Pin_4, 1174, 2000);
// tone(buzzer_Pin_5, 1174, 2000);
// delay(20);
// noTone(buzzer_Pin_1);
// noTone(buzzer_Pin_2);
// noTone(buzzer_Pin_3);
// noTone(buzzer_Pin_4);
// noTone(buzzer_Pin_5);
// delay(20);

//  tone(buzzer_Pin_1, 1174, 200);
// tone(buzzer_Pin_2, 1174, 200);
// tone(buzzer_Pin_3, 1174, 200);
// tone(buzzer_Pin_4, 1174, 200);
// tone(buzzer_Pin_5, 1174, 200);
// delay(20);
// noTone(buzzer_Pin_1);
// noTone(buzzer_Pin_2);
// noTone(buzzer_Pin_3);
// noTone(buzzer_Pin_4);
// noTone(buzzer_Pin_5);
// delay(20);

// tone(buzzer_Pin_1, 1174, 2000);
// tone(buzzer_Pin_2, 1174, 2000);
// tone(buzzer_Pin_3, 1174, 2000);
// tone(buzzer_Pin_4, 1174, 2000);
// tone(buzzer_Pin_5, 1174, 2000);
// delay(20);
// noTone(buzzer_Pin_1);
// noTone(buzzer_Pin_2);
// noTone(buzzer_Pin_3);
// noTone(buzzer_Pin_4);
// noTone(buzzer_Pin_5);
// delay(20);
}
int LED_pins[5] = {1,2,3,4,5};


void loop() {
  warning();
  position = random(0,5);
  digitalWrite(LED_pins[position], HIGH);

//COde for the fast synthwaveish music (quick beat)
// tone(buzzer_Pin_1, 294, 200);
// delay(200);
// tone(buzzer_Pin_1, 392, 200);
// delay(200);

// tone(buzzer_Pin_1, 330, 200);
// delay(200);
// tone(buzzer_Pin_1,262, 200);
// delay(200);
// tone(buzzer_Pin_1, 440,200);
// delay(200);


//for slower around 120 bpm music loop, can snap to
// tone(buzzer_Pin_1, 294);
// delay(200);
// noTone(buzzer_Pin_1);
// delay(200);

// tone(buzzer_Pin_1, 392);
// delay(200);
// noTone(buzzer_Pin_1);
// delay(200);
// tone(buzzer_Pin_1, 330);
// delay(200);
// noTone(buzzer_Pin_1);
// delay(200);
// tone(buzzer_Pin_1,262);
// delay(200);
// noTone(buzzer_Pin_1);
// delay(200);
// tone(buzzer_Pin_1, 440);
// delay(200);
// noTone(buzzer_Pin_1);
// delay(200);

//sound testing code
// tone(buzzer_Pin_1, 294);
// delay(2000);
// noTone(buzzer_Pin_1);
// delay(200);

// tone(buzzer_Pin_1, 392);
// delay(2000);
// noTone(buzzer_Pin_1);
// delay(200);
// tone(buzzer_Pin_1,262);
// delay(2000);
// noTone(buzzer_Pin_1);
// delay(200);
// tone(buzzer_Pin_1, 330);
// delay(2000);
// noTone(buzzer_Pin_1);
// delay(200);

// tone(buzzer_Pin_1, 440);
// delay(2000);
// noTone(buzzer_Pin_1);
// delay(200);


  // buttonState = digitalRead(buttonPin);
  // if (true) {
  //   tone(8, 440);
  //   delay(1000);
  //   noTone(8);
  //   delay(22000);

  //   tone(8, 594);
  //   delay(1000);
  //   noTone(8);
  //   delay(2000);
  //   tone(8, 523);
  //   delay(2000);
  //   noTone(8);

  //   digitalWrite(9, HIGH);
  //   delay(delayTime);
  //   tone(buzzerPin, 587);
  //   delay(delayTime);
  //   tone(buzzerPin, 659);
  //   delay(delayTime);
  //   tone(buzzerPin, 659);
  //   delay(delayTime);
  //   tone(buzzerPin, 587);
  //   delay(delayTime);
  //   tone(buzzerPin, 523);
  //   delay(delayTime);
  //   tone(buzzerPin, 494);
  //   delay(delayTime);
  //   tone(buzzerPin, 440);
  //   delay(delayTime);
  // } 
  // else {
  //  noTone(buzzerPin);
  // }
}