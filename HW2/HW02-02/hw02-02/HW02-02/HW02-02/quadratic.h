////
// Vince porporato
//9.6 quadratic equation
////

#ifndef quadratic_h
#define quadratic_h

class QuadraticEquation
{
private:
	//a, b, and c are the three coefficients for the quadratic equation
	int a;
	int b;
	int c;

public:
	int getA();
	int getB();
	int getC();
	double getDiscriminant(); //Function that returns the discriminant

							  //Functions that return the two roots of the equation:
	double getRoot1();
	double getRoot2();

	//Constructor for A,B, and C
	QuadraticEquation();
	QuadraticEquation(int newA, int newB, int newC);

};

#endif
