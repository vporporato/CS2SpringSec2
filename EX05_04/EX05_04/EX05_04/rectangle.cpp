/////////
//Vince Porporato
/////

#include "rectangle.h"

//no arg constructor
Rectangle2D::Rectangle2D()
{
	//Cenx and Ceny are the center coordinates of the rectangle
	Cenx = 0;
	Ceny = 0;
	width = 1;
	height = 1;
}

//customized constructor
Rectangle2D::Rectangle2D(double Xcoord, double Ycoord, double Width, double Height)
{
	Cenx = Xcoord;
	Ceny = Ycoord;
	width = Width;
	height = Height;
}

//sets the value for x
void Rectangle2D::setX(double newx)
{
	Cenx = newx;
}

//returns the value of x
double Rectangle2D::getX() const
{
	return Cenx;
}

//sets the value of y
void Rectangle2D::setY(double newy)
{
	Ceny = newy;
}

//returns the value of y
double Rectangle2D::getY() const
{
	return Ceny;
}

//sets the width 
void Rectangle2D::setWidth(double newwidth)
{
	width = newwidth;
}

//returns the width
double Rectangle2D::getWidth() const
{
	return width;
}

//sets the height 
void Rectangle2D::setHeight(double newheight)
{
	height = newheight;
}

//returns the height
double Rectangle2D::getHeight() const
{
	return height;
}

//this function calculates the area when called in main
double Rectangle2D::getArea()const
{
	double Area = width *height;
	return Area;
}

//this function calculates the perimeter of the rectangle when called in main
double Rectangle2D::getPerimeter() const
{
	double Perimeter = 2 * width + 2 * height;
	return Perimeter;
}

//this function checks to see if the rectangle includes a certain value for x and y
bool Rectangle2D::contains(double x, double y) const
{
	int count = 0;
	if (x <= (Cenx + .5*width) && x >= (Cenx - .5*width))	//checks the width
		count++;
	if (y <= (Ceny + .5*height) && y >= (Ceny - .5*height))	//checks the height
		count++;

	//This adds up the count from the two if statements, and either returns false or true depending on the count
	if (count < 2)
		return false;
	else if (count == 2)
		return true;
}

//This function checks if another rectangle is in the outer rectangle
bool Rectangle2D::contains(const Rectangle2D &r) const
{
	int count = 0;
	if ((Cenx + .5*width) <= (Cenx + .5*width) && (Cenx - .5*width) >= (Cenx - .5*width))	//checks the width
		count++;
	if ((Ceny + .5*width) <= (Ceny + .5*height) && (Ceny - .5*height) >= (Ceny - .5*height))	//checks the height
		count++;

	//This ouputs whether the expression is true or false
	if (count < 2)
		return false;
	else if (count ==2)
		return true;
}

//This function checks to see if the two funcions are overlapping
bool Rectangle2D::overlaps(const Rectangle2D &r) const
{
	int count = 0;
	if ((Cenx + .5*width) <= (Cenx + .5*width) && (Cenx - .5*width) >= (Cenx - .5*width))	//checks the width
		count++;
	if ((Ceny + .5*width) <= (Ceny + .5*height) && (Ceny - .5*height) >= (Ceny - .5*height))	//checks the height
		count++;	

	//This outputs whether it is true or false depending on the count
	if (count < 1)
		return false;
	else if (count >=1)
		return true;
}