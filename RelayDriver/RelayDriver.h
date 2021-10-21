/* --------------------------------------------------------------------------------------------------- *
* Khanh Truong - khanhptruong@csu.fullerton.edu
* California State University Fullerton
* Created: FEB 20 2018
*
* Description: Device driver for 4 Channel Relay
*
* Copyright 2018
* --------------------------------------------------------------------------------------------------- */

#ifndef RelayDriver_h
#define RelayDriver_h

#include "Arduino.h"

class RelayDriver{
public:
	RelayDriver();
	void init(byte PIN_IN1, byte PIN_IN2, byte PIN_IN3, byte PIN_IN4);
	void click(int inX, bool toggle);
private:
	byte _PIN_IN1;
	byte _PIN_IN2;
	byte _PIN_IN3;
	byte _PIN_IN4;
};

#endif