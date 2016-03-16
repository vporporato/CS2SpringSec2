/////
//Name:Vince Porporato
//Assignment: 10.13 Geometry: n-sided regular polygon
//Class-CS 172-2
/////////

#include <iostream>
#include "RegularPolygon.h"
using namespace std;

int main()
{
   //Outputs the area and perimter for the first polygon, using the no arg constructor that is centered
    //at (0,0) with n=3, and side=1
    cout<<"Regular Polygon 1:"<<endl;
    RegularPolygon Polygon1;
    cout<<"The area is "<<Polygon1.getArea()<<endl;
    cout<<"The perimeter is "<<Polygon1.getPerimeter()<<endl;
    cout<<endl;
    
    //Outputs the area and perimeter for the second polygon, using the constructor that creates a regular
    //polygon center at (0,0) with n=6, and side=4
    cout<<"Regular Polygon 2:"<<endl;
    RegularPolygon Polygon2(6,4);
    cout<<"The area is "<<Polygon2.getArea()<<endl;
    cout<<"The perimeter is "<<Polygon2.getPerimeter()<<endl;
    cout<<endl;
    
    //Outputs the area and perimeter for the third polygon, using the customized constructor that is
    //centered at (5.6,7.8) with n=10, and side=4
    cout<<"Regular Polygon 3:"<<endl;
    RegularPolygon Polygon3(10,4,5.6,7.8);
    cout<<"The area is "<<Polygon3.getArea()<<endl;
    cout<<"The perimeter is "<<Polygon3.getPerimeter()<<endl;
    cout<<endl;
    
    
    return 0;
}