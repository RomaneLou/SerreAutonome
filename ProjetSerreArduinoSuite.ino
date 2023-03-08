#include <Servo.h>

Servo monServomoteur;

void setup() {
  
  monServomoteur.attach(11);
  pinMode(10,INPUT);

}

void loop() {
  if (digitalRead(10)==HIGH){
  monServomoteur.write(180);

}
else {
  monServomoteur.write(0);
}

}
