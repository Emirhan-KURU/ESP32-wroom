#include <SErvo.h>

static const int servoPin = 25;
int Pins[] = {13, 12, 14};
int Pos = 0;
Servo servo1;

void setup() {
    Serial.begin(115200);
    servo1.attach(servoPin);
    pinMode(Pins[2], INPUT_PULLUP);
}

void loop() {
  if(analogRead(Pins[0])<=2100 & analogRead(Pins[1])<= 2700 & analogRead(Pins[2])<= 800)
  {
    for (int j = 0;j<=45; Pos += 1, j++) { // goes from 0 degrees to 180 degrees
    servo1.write(Pos);              // tell servo to go to position in variable 'pos'
    delay(15);  
    }
  }
  else if(analogRead(Pins[0])==4095& analogRead(Pins[1])== 4095 & analogRead(Pins[2])== 4095)
  {
    for (int j = 45;j>=0; Pos -= 1, j--) { // goes from 0 degrees to 180 degrees
    servo1.write(Pos);              // tell servo to go to position in variable 'pos'
    delay(15);  
    } }
   else if(analogRead(Pins[2])== 0)
   {
    for (; Pos >= 0; Pos -= 1) { // goes from 0 degrees to 180 degrees
    servo1.write(Pos);              // tell servo to go to position in variable 'pos'
    delay(15); 
    }}
   delay(100);
   
}
