/////////
//Vince Porporato
//9.11 Even Number class
/////

//#ifndef "EvenNumber.h"
//#define "EvenNumber.h"

class EvenNumber		//Class EvenNumber for representing an even number
{
public:
	int value;	//represents the integer value stored in the object
	int Next;
	int Previous;
	int getValue();		//Function to return an int value for this object
	int getNext();		//Function that returns an EvenNumber onject that represents the next even number
	int getPrevious();	//Function that represents the previous even number

//Constructor that constructs an even number object with the specified value that is entered
	EvenNumber() {
		value = 16;
	}

};
