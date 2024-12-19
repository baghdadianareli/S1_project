void setup() {
  // Setup serial communication at baudrate 9600 for reading the light sensor
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(A10);  //D4

  // Print out the values to read in the Serial Monitor
  Serial.print("Analog reading (0-1023): ");
  Serial.print(lightValue);

  // Use the value to determine how dark it is 
  // (Try tweaking these to make it more accurate)
  if (lightValue < 10) {
    Serial.println(" - Dark");
  } else if (lightValue < 200) {
    Serial.println(" - Dim");
  } else if (lightValue < 500) {
    Serial.println(" - Light");
  } else if (lightValue < 800) {
    Serial.println(" - Bright");
  } else {
    Serial.println(" - Very bright");
  }

  delay(500);
}