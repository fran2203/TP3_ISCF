int LED = 13;
int SensorOptico = 1;

void setup() {
  pinMode(LED, INPUT);
  pinMode(SensorOptico, INPUT);
  digitalWrite(LED, HIGH);
}

void loop() {
  if(digitalRead(SensorOptico) == HIGH){
    digitalWrite(LED, LOW);
  }
  if(digitalRead(SensorOptico) == LOW){
    digitalWrite(LED, HIGH);
  }
}
