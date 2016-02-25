///
//Vince porporato
//9.2 the fan class
///

//Include the fan header file
#include "fan.h"

//Sets the defaults for the fans
fan::fan() {
	speed = 1;
	on = false;
	radius = 5;
}

// sets all of the initial variables equal to the new variables that gets entered.
fan::fan(int newSpeed, bool newOn, double newRadius)
{
	speed = newSpeed;
	on = newOn;
	radius = newRadius;
}

//returns the speed, once it gets called in main
int fan::getSpeed() {
	return speed;
}

//returns whether its on or off when it gets called in main
bool fan::getOn() {
	return on;
}

//returns the radius when it gets called in the main function
double fan::getRadius() {
	return radius;
}

//Sets the speed for the fan that gets entered in the in the customized constructor in main
void fan::setSpeed(int newSpeed) {
	speed = newSpeed;
}

//sets the setting on/off that is entered in the customized constructor
void fan::setOn(bool newOn) {
	on = newOn;
}
//Sets the radius that is entered in main
void fan::setRadius(double newRadius) {
	radius = newRadius;
}
