//
//Vince Porporato
//Assignment: HW02-01, 9.2 the fan class
//CS 172-2
////

#include<iostream>
#include"fan.h"     //Includes what is in both the header file and the fan.cpp file
using namespace std;

int main()
{
	//These are the two customized constructor for fans 1 and 2
	fan fan1(3, true, 10.0);
	fan fan2(2, false, 5.0);

	//This outputs the custom/ new settings for Fan 1
	cout << "Fan 1:" << endl;
	cout << "Speed: " << fan1.getSpeed() << endl;     //outputs the speed
	cout << "On/Off: " << fan1.getOn() << endl;       //outputs wheteher or not the fan is on or off
	cout << "Radius: " << fan1.getRadius() << endl;   //outputs the value for the radius of the fan
	cout << endl;

	//This outputs the custom or new settings for Fan 2
	cout << "Fan 2:" << endl;
	cout << "Speed: " << fan2.getSpeed() << endl;   //gets the speed entered in custom constructor and outputs it
	cout << "On/Off: " << fan2.getOn() << endl;      //outputs whether or not fan 2 is on or off
	cout << "Radius: " << fan2.getRadius() << endl;   //gets the radius in constructor and outputs it

													//Derek - nicely done just remember to move your header file to the header file folder.
	return 0;
}