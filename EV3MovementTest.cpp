#include <Arduino.h>

#define MOTEN 5
#define MOTO1 4
#define MOTO2 3

void StopMotor();

void MoveMotor(int speed);

void setup()
{
  pinMode(MOTEN, OUTPUT);
  pinMode(MOTO1, OUTPUT);
  pinMode(MOTO2, OUTPUT);

  MoveMotor(100);
  delay(250);
  MoveMotor(-100);
  delay(250);
  StopMotor();
}

void loop()
{
}

void MoveMotor(int speed)
{
  if (speed > 100)
    speed = 100;
  if (speed < -100)
    speed = -100;

  analogWrite(MOTEN, int(abs(speed) * 2.55));

  if (speed > 0)
  {
    digitalWrite(MOTO1, HIGH);
    digitalWrite(MOTO2, LOW);
  }
  else
  {
    digitalWrite(MOTO1, LOW);
    digitalWrite(MOTO2, HIGH);
  }
}

void StopMotor()
{
  digitalWrite(MOTO1, LOW);
  digitalWrite(MOTO2, LOW);
}
