#include "Arduino.h"
#include "RelayDriver.h"

RelayDriver::RelayDriver(){
	//do nothing
}

void RelayDriver::init(byte PIN_IN1, byte PIN_IN2, byte PIN_IN3, byte PIN_IN4){
	_PIN_IN1 = PIN_IN1;
	_PIN_IN2 = PIN_IN2;
	_PIN_IN3 = PIN_IN3;
	_PIN_IN4 = PIN_IN4;
	
	pinMode(_PIN_IN1, OUTPUT);
	pinMode(_PIN_IN2, OUTPUT);
	pinMode(_PIN_IN3, OUTPUT);
	pinMode(_PIN_IN4, OUTPUT);
	
	digitalWrite(_PIN_IN1, HIGH);
	digitalWrite(_PIN_IN2, HIGH);
	digitalWrite(_PIN_IN3, HIGH);
	digitalWrite(_PIN_IN4, HIGH);
}

void RelayDriver::click(int inX, bool toggle){
	if (!toggle){ digitalWrite(inX, HIGH); }
	else   { digitalWrite(inX, LOW); }
}