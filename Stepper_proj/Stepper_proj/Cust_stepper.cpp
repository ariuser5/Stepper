#include "Cust_stepper.h"

Stepper::Stepper()
{
	pins[0] = 0;
	pins[1] = 0;
	pins[2] = 0;
	pins[3] = 0;

	stepAngle = 1;
	speed = 1;
	stepType = FullStep;
}

Stepper::Stepper(int pin1, int pin2, int pin3, int pin4)
{
	Stepper();

	pins[0] = pin1;
	pins[1] = pin2;
	pins[2] = pin3;
	pins[3] = pin4;
}

void Stepper::Step()
{
}

void Stepper::Step(int steps)
{
}

void Stepper::setSpeed(int val)
{
}
