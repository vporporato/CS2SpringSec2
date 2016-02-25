///////////
//Vince Porporato
//9.11 Even number class
//////

#include "EvenNumber.h"
#include <cmath>

//Used to return the value when called in the main function
int EvenNumber::getValue() {
	return value;
}

//Used to add two to the value and ouput it when called in main
int EvenNumber::getNext() {
	Next = value + 2;
	return Next;
}

//Subtracts two from the value and outputs it to main 
int EvenNumber::getPrevious() {
	Previous = value - 2;
	return Previous;
}