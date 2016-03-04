//////
//Name:Vince Porporato
//Exam 1
//Class: 172-2
//I affirm that all code given below was written solely by me, vince porporato and that any help I
//received adhered to the rules stated for this exam.
/////

#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"


//Customized Constructor
Event::Event(int newT, string newN) {
    Title = newN;
    Time = newT;
}

//Default constructor
Event::Event() {
    Time = -1;
    Title = "free";
}


//Returns the time when called in main
int Event::getTime()
{
    return Time;
}

//Returns the title when called in main
string Event::getTitle()
{
    return Title;
}

//Sets the time of the event to the new time entered for the event
void Event::setTime(int newT) {
    Time = newT;
}
//Sets the name of the title of the event to the new name entered for the event
void Event::setTitle(string newN){
    Title=newN;
}

    
    
    
    
    
    
    
    








