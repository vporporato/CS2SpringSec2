/////////
//Vince Porporato
//HW 05_02 Ex. 11.3 increase array size
///////

#include <iostream>
#include <cmath>
using namespace std;

//This function doubles the size of the array
int* doubleCapacity(const int* list, int size) {
	int* doubleArray = new  int[size*2];
	//copies over the original array
	for (int i = 0;i < size;i++) {	
		doubleArray[i] = list[i];
	}
	//outputs the new doubled array
	for (int i = 0;i < size * 2;i++) {
		cout << doubleArray[i] << "   " << endl;
	}

	return doubleArray;
}

int main() {
	//Has the user enter a size in for the array which gets stored to arraysize
	cout << "Enter the size of the array: " << endl;
	int arraysize;
	cin >> arraysize;

	//calls the new doubled array
	int size = arraysize;
	int* list;
	list = new  int[size];

	//calls the function above
	doubleCapacity(list,size);

	delete[] list;
}
