int LED = 13;
int SensorOptico = 1;
int PinSalida = 2;

void setup() {
  pinMode(LED, INPUT);
  pinMode(SensorOptico, INPUT);
  pinMode(PinSalida, OUTPUT);
  digitalWrite(LED, HIGH);
}
//0,1875 micros / iteracion -> 5.333.333 iteraciones
void loop() {
  for(int i = 0; i<5300; ++i){

  }
  digitalWrite(PinSalida, HIGH);
  digitalWrite(LED, LOW);

  for(int i = 0; i<5300; ++i){
    
  }

  digitalWrite(PinSalida, LOW);
  digitalWrite(LED, HIGH);

}
