///////////
//Name:Vince Porporato
//Assignment: HW02_03 Even number class
//CS 172-2
/////////

#include<iostream>
#include "EvenNumber.h"		//includes the class for EvenNumber
using namespace std;

int main()
{
	EvenNumber Number;	//Define the variable number to output the previous and next numbers
	cout << "The next number is " << Number.getNext() << endl;		//Output the next value
	cout << "The previous number is " << Number.getPrevious() << endl;		//Output the previous value
														//Derek - don't see your UML, code is good, remember the header file, and also might want to move int value from public to private 
	return 0;
}