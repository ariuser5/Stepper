#pragma once

#ifndef _CUST_STEPPER_
#define _CUST_STEPPER_

class Stepper {
private:

public:
	
	enum StepType {
		FullStep,
		PowerStep,
		HalfSTep
	};

	int pins[4];
	int stepAngle;
	int speed;

	StepType stepType;

	//Constructor
	Stepper();
	Stepper(int pin1, int pin2, int pin3, int pin4);

	//Methods
	void Step();
	void Step(int steps);
	void setSpeed(int val);
};

class Unipolar_Stepper : Stepper {
public:

};

class Bipolar_Stepper : Stepper {
public:

};

#endif