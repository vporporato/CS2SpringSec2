////////
//Name: Vince Porporato
//Assignment: EX05_03
//CS172-3
//////

#include <iostream>
using namespace std;
/*Derek- this is good logic and it should do everything right, it crashes after runtime though which is a problem. Other than that I think it looks good, nice job
19/20
*/
//Gets the size of the array that is entered by the user
void size(int* size) {
	cout << "What do you want the size of the array to be?" << endl;
	cin >> *size;
}

//Creates the array 
int* allocateArray(int size) {
	int* array = new  int[size];	//the new array equals what is entered by the user

	//This loop gives each location in the array a value
	for (int i = 0;i < size;i++) {
		array[i] = 4;	//each location has the value of 4 at the start
	}
	return array;
}

//Adds the values that the user enters, and stores them in the array
void populateArray(int* array, int size) {
	//the for loop is used to store the numbers in the array
	for (int* i = array;i < array + size;i++) {
		cout << "Enter the " << size << " numbers for the array." << endl;
		//the values are added to i, which gets incremented to the next location in the array
		cin >> *i;
	}
}

//This function gets the smallest number that is stored in the array
int smallestinArray(int* array, int size) {
	//smallestelement holds the smallest value in the array
	int smallestElement = array[0];
	//This loop checks all the values in the loop, and the smallest value gets stored in smallestelement
	for (int i = 0;i < size;i++)
	{
		if (smallestElement > array[i]) {
			smallestElement = array[i];
		}
	}
	return smallestElement;
}


int main() {
	// This maintains the array size
	int ArraySize;

	//gets the size of the array
	size(&ArraySize);
	//creates the array
	int*array = allocateArray(ArraySize);
	//fills the values into the array
	populateArray(array, ArraySize);
	//outputs the smallest value
	cout << smallestinArray(array, ArraySize) << " is the smallest element in the array." << endl;
	return 0;
}