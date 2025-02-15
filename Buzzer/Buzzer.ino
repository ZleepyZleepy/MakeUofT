int buzzer_Pin_1 = 9;
int buttonPin = 2;
int buttonState;
int delayTime = 500;
int i =0;

void setup() {
  while i < 
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(buttonPin, INPUT);


}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (True) {
    tone(8, 440);
    delay(1000);
    noTone(8);
    delay(22000);

    tone(8, 594);
    delay(1000);
    noTone(8);
    delay(2000);
    tone(8, 523);
    delay(2000);
    noTone(8);

    digitalWrite(9, HIGH);
    delay(delayTime);
    tone(buzzerPin, 587);
    delay(delayTime);
    tone(buzzerPin, 659);
    delay(delayTime);
    tone(buzzerPin, 659);
    delay(delayTime);
    tone(buzzerPin, 587);
    delay(delayTime);
    tone(buzzerPin, 523);
    delay(delayTime);
    tone(buzzerPin, 494);
    delay(delayTime);
    tone(buzzerPin, 440);
    delay(delayTime);
  } 
  else {
   noTone(buzzerPin);
  }
}