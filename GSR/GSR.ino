const int GSR=A0;
int sensorValue=0;
int gsr_average=0;
int default_gsr = 0;
bool stress = false;
int reading_count = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  long sum=0;
  for(int i=0;i<10;i++)           //Average the 10 measurements to remove the glitch
      {
      sensorValue=analogRead(GSR);
      sum += sensorValue;
      delay(5);
      }
   gsr_average = sum/10;

  if (reading_count < 5){
    // Calculate the default GSR average from the first 5 readings
    default_gsr += gsr_average;
    reading_count++;
    if (reading_count == 5){
      default_gsr /= 5;  // Set the default GSR average
      Serial.print("You may start the game now!");
      Serial.print("Default GSR Average: ");
      Serial.println(default_gsr);
    }
  } else{
    // Compare the new GSR average with the default
    if (gsr_average < (default_gsr - 100)) {
      stress = true;
      Serial.println("Stress detected!");
    } else {
      stress = false;
    }
  }

  Serial.print("GSR Average: ");
  Serial.println(gsr_average);
  delay(100);
}