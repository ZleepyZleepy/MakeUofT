int micPins[4] = {A0, A1, A2, A3};
int micOutputs[4] = {0, 0, 0, 0};
int maxOutput = 0;
int threshold = 200;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int[4] mn = {1024, 1024, 1024, 1024};
  int[4] mx = {0, 0, 0, 0};

  for (int j = 0; j < 50; ++j) {
    for (int i = 0; i < 3; ++i) {
      int val = analogRead(micPins[i]);
      mn[i] = min(mn[i], val);
      mx[i] = max(mx[i], val);
    }
  }

  for (int i = 0; i < 3; ++i) {
      micOutputs[i] = mx[i] - mn[i];
  }

  maxOutput = min(min(micOutputs[0], micOutputs[1]), min(micOutputs[2], micOutputs[3]))

  if (maxOutput == micOutputs[0] && micOutputs[0] > threshold) {

  } else if (maxOutput == micOutputs[1] && micOutputs[1] > threshold) {
    
  } else if (maxOutput == micOutputs[2] && micOutputs[2] > threshold) {

  } else if (maxOutput == micOutputs[3] && micOutputs[3] > threshold) {

  } else {

  }

}