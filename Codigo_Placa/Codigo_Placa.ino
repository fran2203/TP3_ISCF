int LED = 13;
int SensorOptico = 1;
int PinSalida = 2;

void setup() {
  pinMode(LED, INPUT);
  pinMode(SensorOptico, INPUT);
  pinMode(PinSalida, OUTPUT);
  digitalWrite(LED, HIGH);
}
//0,1875 micros / iteracion -> 5.333 iteraciones para 1 s
void loop() {
  if(digitalRead(SensorOptico)==HIGH){
    digitalWrite(LED, HIGH);
    digitalWrite(PinSalida, HIGH);
  } else{
    digitalWrite(LED, LOW);
    digitalWrite(PinSalida, HIGH);
    for(int i = 0; i<5300;++i){
    }
    digitalWrite(LED, HIGH);
    digitalWrite(PinSalida, LOW);
    for(int i = 0; i<5300;++i){
    }
  }
}
