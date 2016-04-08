#include <iostream>
using namespace std;

#ifndef rectangle_h_
#define rectangle_h_

class Rectangle2D
{
private:
	double Cenx;	//center x coordinate
	double Ceny;	//center y coordinate
	double height;
	double width;

public:
	void setX(double);
	double getX() const;
	void setY(double);
	double getY() const;
	void setWidth(double);
	double getWidth()const;
	void setHeight(double);
	double getHeight()const;
	double getArea() const;
	double getPerimeter() const;
	Rectangle2D();	//no arg constructor with (0,0) with 1 for height and width
	Rectangle2D(double xcoord, double ycoord, double width, double height); //customized constructor
	bool contains(double x, double y) const;		// returns true if (x,y) are in the rectangle
	bool contains(const Rectangle2D &r) const;	//returns true if the specified rectangle is within this rectangle
	bool overlaps(const Rectangle2D &r) const;	//returns true if specified rectangle overlaps with this rectangle



};

#endif 

