////////
//Name: Vince Porporato
//Assignment: EX05_04 11.9 Geometry: The Rectangle2D class
/////
/*Derek-
Vince I like how ou figured out the contains functions that was a different way of looking at it that I had not thought of nice job..
20/20*/
#include <iostream>
using namespace std;
#include "rectangle.h"

int main() {
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	//The area and perimeter for the first rectangle
	cout << "The area is " << r1.getArea() << endl;
	cout << "The perimeter is " << r1.getPerimeter() << endl;
	//These three output either return 1 for true or 0 for false
	cout << r1.contains(3, 3) << endl;	//checks if the coordinates are inside rectangle 1
	cout << r1.contains(r2) << endl;	//checks to see if rectangle 2 is inside of rectangle
	cout << r1.overlaps(r3) << endl;	//checks to see if rectangle 3 overlaps rectangle 1

	return 0;

}