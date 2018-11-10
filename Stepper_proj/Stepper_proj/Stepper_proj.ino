/*
 Name:		Stepper_proj.ino
 Created:	11/4/2018 11:49:59 PM
 Author:	Darius Emanuel
*/

#include "Cust_stepper.h"

Unipolar_Stepper stepper = Unipolar_Stepper();

// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
}

// the loop function runs over and over again until power down or reset
void loop() {
  
}
