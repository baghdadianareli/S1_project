float val = 0;

long readUltrasonicDistance(int triggerPin, int echoPin);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  val = 0.01723 * readUltrasonicDistance(6,5);
  Serial.print(val);
  delay(200);
}


long readUltrasonicDistance(int triggerPin, int echoPin){
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delay(0.002);
  digitalWrite(triggerPin, HIGH);
  delay(0.01);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}