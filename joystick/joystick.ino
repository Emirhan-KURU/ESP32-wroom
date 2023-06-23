
int Pins[] = {13,12,14};

 void setup() {
  Serial.begin(115200);
  pinMode(Pins[2],INPUT_PULLUP);
}

void loop() {
  int x = analogRead(Pins[0]);
  int y = analogRead(Pins[1]);
  int z = analogRead(Pins[2]);
  Serial.printf("X,Y,Z: %d,\t%d,\t%d\n",x,y,z);
  delay(100);

}
