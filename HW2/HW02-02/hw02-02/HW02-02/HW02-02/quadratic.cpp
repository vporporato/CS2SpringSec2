/////
//Vince porporato
//9.6 quadratic equation
///

#include<cmath>
#include "quadratic.h"


QuadraticEquation::QuadraticEquation(int numberA, int numberB, int numberc) {
	a = numberA;
	b = numberB;
	c = numberc;
}

//Functions that get a,b,c and return them when they are called in main
int QuadraticEquation::getA() {      //Returns A
	return a;
}

int QuadraticEquation::getB() {      //Returns B
	return b;
}

int QuadraticEquation::getC() {      //Returns C
	return c;
}


//Function that is used to get and return root1
double QuadraticEquation::getRoot1() {
	double Root1;
	Root1 = ((-b) + sqrt(b*b - (4 * a*c))) / (2 * a);   //Quadratic equation that adds the discriminant


	return Root1;
}

//Function that is used to get and output the value for root2
double QuadraticEquation::getRoot2() {
	double Root2;
	Root2 = ((-b) - sqrt(b*b - (4 * a*c))) / (2 * a);   //Quadratic equation that subtracts the discriminant

	return Root2;

}


//Function that outputs the value for the discriminant when called in main
double QuadraticEquation::getDiscriminant() {
	double Discriminant;
	Discriminant = b*b - (4 * a*c);

	return Discriminant;
}

