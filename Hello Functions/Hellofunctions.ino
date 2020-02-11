#include <Servo.h>
int trig = 11;
int echo = 12;
int distance;
int duration;
int servo = 8;
Servo myservo;
void setup()
{
  Serial.begin(9600);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  myservo.attach(8);
  myservo.write(90); 
}

void loop()
{
  digitalWrite(trig, LOW);
  delay(5);
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
  distance = pulseIn(echo, HIGH);
  Serial.println(duration);
  duration = distance * 0.01330 / 2;
  if ((duration < 5) && (duration > 0))
    myservo.write(180);
  else
    if (duration > 5)
      myservo.write(0);
  else
    myservo.write(90);
}