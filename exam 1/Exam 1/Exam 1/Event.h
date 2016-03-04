//////
//Name:Vince Porporato
//Exam 1
//Class: 172-2
//I affirm that all code given below was written solely by me, vince porporato and that any help I
//received adhered to the rules stated for this exam.
/////

#include<string>
#include <iostream>
using namespace std;

#ifndef Event_h
#define Event_h

// Defines the variables and functions for the Event class
class Event
{
private:
    int Time;
    string Title;
public:
    Event();                        //default constructor
    Event(int time, string name);   //customized constructor
    int getTime();                  //outputs the time
    string getTitle();              //outputs the title
    void setTime(int newT);         //new time
    void setTitle(string newN);     //new name
    
};
#endif
