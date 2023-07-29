#include <Arduino.h>

#define YELLOWPIN 6
#define BLUEPIN 2

volatile long degrees;

void CountDegrees();

void setup()
{
  Serial.begin(9600);
  while (!Serial)
    ;

  pinMode(YELLOWPIN, INPUT);
  pinMode(BLUEPIN, INPUT);

  degrees = 0;

  attachInterrupt(digitalPinToInterrupt(BLUEPIN), CountDegrees, CHANGE);
}

void loop()
{
  static long deg = 0;

  if (degrees != deg)
  {
    Serial.println(degrees);
    deg = degrees;
  }
}

void CountDegrees()
{
  if (digitalRead(YELLOWPIN) == digitalRead(BLUEPIN))
  {
    degrees++;
  }
  else
  {
    degrees--;
  }
}
