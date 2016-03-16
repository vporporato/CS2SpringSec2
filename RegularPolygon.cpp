/////
//Name:Vince Porporato
//Assignment: 10.13 Geometry: n-sided regular polygon
//Class-CS 172-2
/////////

#include "RegularPolygon.h"
#include <cmath>

//no arg constructor
RegularPolygon::RegularPolygon() {
    n = 3;
    side = 1;
    x = 0;
    y = 0;
}

//constructor for polygon setted at (0,0)
RegularPolygon::RegularPolygon(int newN, int newSide){
    x=0;
    y=0;
    n=newN;
    side=newSide;
}

//customized constructor
RegularPolygon::RegularPolygon(int newN, int newSide,double newX, double newY){
    n=newN;
    side=newSide;
    x=newX;
    y=newY;
}

//Outputs n
int RegularPolygon::getn() {
    return n;
}

//Outputs the length of the side
double RegularPolygon::getSide() const {
    return side;
}

//Outputs the x
double RegularPolygon::getX() const {
    return x;
}

//Outputs the value of y
double RegularPolygon::getY() const {
    return y;
}

//outputs the area of the polygon
double RegularPolygon::getArea() const {
    return ((n*(side*side))/(4*tan(3.141592654/n)));
}

//outputs the perimeter of the polygon
double RegularPolygon::getPerimeter() const {
    return (n*side);
}

//sets the value for n the number of sides
void RegularPolygon::setn(int newN) const {
    double n = newN;
}

//sets the length of the side
void RegularPolygon::setSide(double newS) const {
    double side = newS;
}

//sets the value for the x coordinate
void RegularPolygon::setX(double newX) const {
    double X = newX;
}

// sets the value for the y coordinate
void RegularPolygon::setY(double newY) const {
    double Y = newY;
}