#include <Servo.h>

Servo monServo;
int Lum = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  monServo.attach(9);
  monServo.write(0);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Lum = analogRead(A0);
  Serial.println(Lum);
  if (Lum > 500) {
    monServo.write(179);
  }
  else {
    monServo.write(0);
  }
  delay(500);
}
