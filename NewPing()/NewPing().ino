#include <NewPing.h>
#define TRIGGER_PIN 7
#define ECHO_PIN 6
#define MAX_DISTANCE 50
NewPing myHCSR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup()
{
	Serial.begin(9600);
	pinMode(5, OUTPUT);
}

void loop()
{
	Serial.println(myHCSR04.ping_cm());
	delay(50);
	if (myHCSR04.ping_cm() > 15)
	{
		digitalWrite(5, HIGH);
	}
	if (myHCSR04.ping_cm() <= 15)
	{
		digitalWrite(5, LOW);
	}
}
