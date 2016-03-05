/////
//Vince porporato
//Assignment: HW02 part 2, 9.6 algebra quadradic equation
//CS:172-2

#include<iostream>
#include<cmath>
#include"quadratic.h"   //The header file for the code which encludes the class for quadratic equation and
//also the quadradic.cpp file
using namespace std;

int main()

{   //Asks the user to enter three numbers for the equation
	//These are the numbers that get entered by the user
	double numberA; double numberB; double numberC;
	cout << "Please enter the three values for a, b, and c: ";
	cin >> numberA >> numberB >> numberC;
	cout << endl;

	//Constructor, which stores the three numbers that get entered
	QuadraticEquation Equation(numberA, numberB, numberC);

	//Sets the variable discriminant equal to the value that is stored in Discriminant and
	//Equatoin.getDiscriminant gets the value that is stored in it
	int discriminant = Equation.getDiscriminant();

	//Displays the two roots if the discriminant that is greater than 0
	if (discriminant>0) {
		cout << Equation.getRoot1() << "     " << Equation.getRoot2() << endl;
	}
	//Displays root1 if the discrimiinant is equal to 0
	else if (discriminant == 0) {
		cout << Equation.getRoot1() << endl;
	}
	//Outputs this if the discriminant is negative
	else
		cout << "The equation has no real roots" << endl;


														//Derek - code looks fantastic and the output is also well formated nice job, I can't find your UML though, did you do that?

	return 0;
}