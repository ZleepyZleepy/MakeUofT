int buzzer_Pin_1 = 9;
int buzzer_Pin_2 = 10;
int buzzer_Pin_3 = 11;
int buzzer_Pin_4 = 12;
int buzzer_Pin_5 = 13;
int buttonPin = 2;
int buttonState;
int i = 9;

void setup() {
  while (i < 14){
    pinMode(i, OUTPUT);
    i += 1;
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  // generate random
  // light led
  // check mic position at led
  // play sound (or error)
  // add point
  // loop again

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