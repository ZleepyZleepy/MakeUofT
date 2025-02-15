int micPins[4] = {A0, A1, A2, A3};
int micOutputs[4] = {0, 0, 0, 0};
int maxOutput = 0;
int threshold = 200;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 3; ++i) {
      int mn = 1024;
      int mx = 0;

    for (int j = 0; j < 50; ++j) {
      int val = analogRead(micPins[i]);
      mn = min(mn, val);
      mx = max(mx, val);
    }

    int delta = mx - mn;
    micOutputs[i] = delta;

  }

  maxOutput = min(min(micOutputs[0], micOutputs[1]), min(micOutputs[2], micOutputs[3]))

  if (maxOutput == micOutputs[0] && micOutputs[0] > threshold) {

  } else if (maxOutput == micOutputs[1] && micOutputs[1] > threshold) {
    
  } else if (maxOutput == micOutputs[2] && micOutputs[2] > threshold) {

  } else if (maxOutput == micOutputs[3] && micOutputs[3] > threshold) {

  } else {

  }

}
