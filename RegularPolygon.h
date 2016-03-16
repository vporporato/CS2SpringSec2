/////
//Name:Vince Porporato
//Assignment: 10.13 Geometry: n-sided regular polygon
//Class-CS 172-2
/////////

#ifndef RegularPolygon_h
#define RegularPolygon_h

class RegularPolygon
{
private:
    int n;
    double side;
    double x;
    double y;
public:
    RegularPolygon(); //no arg constructor n=3,side=1, x=0, y=0
    RegularPolygon(double x, double y); //constructor that is centered at (0,0)
    RegularPolygon(int n, int side, double x, double y);    //customized constructor
    
    //Functions used to get and return the value for n, side, x, y, perimeter, and area
    int getn();
    double getSide() const;
    double getX() const;
    double getY() const;
    double getPerimeter() const;
    double getArea() const;
    
    //Void functions to set the variables for n, side, x, and y
    void setn(int newN) const;
    void setSide(double newS) const;
    void setX(double newX) const;
    void setY(double newY) const;
    
};
#endif


