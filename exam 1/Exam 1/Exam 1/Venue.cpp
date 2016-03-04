//////
//Name:Vince Porporato
//Exam 1
//Class: 172-2
//I affirm that all code given below was written solely by me, vince porporato and that any help I
//received adhered to the rules stated for this exam.
/////

#include <string>
#include "Event.h"
#include "Venue.h"

//This function is used to check and see if a time has an event already scheduled
bool Venue::validTime(int Time){
    int timevalid=true;
    //checks the values in the array
    for(int numEvents=0;numEvents<12;numEvents++)
        {
        if(Time==scheduledEvents[numEvents].getTime()){
            timevalid=false;
        }
    }
    //Returns if the the statement validTime is true or false
    return timevalid;
}
//Adds the events into the array if the time is free, by the validTime function above
void Venue::addEvent(int Time, string Name) {
    if(validTime(Time)==true)
    {
        scheduledEvents[Time].setTime(Time);    //sets the time
        scheduledEvents[Time].setTitle(Name);   //sets the name of the event
        cout<<"Event scheduled!"<<endl;
    }
    else
        cout<<"Couldn't schedule event :("<<endl;   //if the time is already taken
}
//uses the loop to check the values in the array, and if the time is in the array, it returns that event
Event Venue::findEvent(int Time){
    for(int numEvents=0;numEvents<12;numEvents++)
    {
        if(scheduledEvents[numEvents].getTime()==Time)
            return scheduledEvents[Time];
    }
    //creates an object for the cases that dont work in the loop above
    Event doesntExist;
    return doesntExist;
}
//checks the values in the array to see if the name is in the array or not
Event Venue::findEvent(string Name) {
    for(int numEvents=0;numEvents<12;numEvents++)
    {
        if(scheduledEvents[numEvents].getTitle()==Name)
            return scheduledEvents[numEvents];
    }
    //creates an object for the cases that dont work in the loop above
    Event doesntExist;
    return doesntExist;
}
