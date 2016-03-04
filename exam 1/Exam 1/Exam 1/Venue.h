//////
//Name:Vince Porporato
//Exam 1
//Class: 172-2
//I affirm that all code given below was written solely by me, vince porporato and that any help I
//received adhered to the rules stated for this exam.
/////

#include<string>
#include <iostream>
#include"Event.h"		//This is to enable the use of the class Event in this header file
using namespace std;

#ifndef Venue_h
#define Venue_h

//Defines the variables and function for the class Venue
class Venue
{
private:
    Event scheduledEvents[12];
    int numEvents;
    bool validTime(int Time);
public:
    void addEvent(int Time, string Name);
    Event findEvent(int Time);
    Event findEvent(string Name);
};
#endif