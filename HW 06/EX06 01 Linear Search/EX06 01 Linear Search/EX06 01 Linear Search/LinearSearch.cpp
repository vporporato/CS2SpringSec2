/////////////
//Vince Porporato
//EX06 01 Linear Search
//CS 172-2
///////////

#include <iostream>
using namespace std;

//this is the linear search function which I changed to use a generic type S
template <typename S>
int LinearSearch (const S list[],S key, int arraySize)
{
	//This for loop checks to see and outputs where the key or number or word is located in the array
	for (int i = 0;i < arraySize;i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}

int main()
{
	//Array 1 is set to an Array of ints to test the function
	int Array1[] = { 1,4,55,3,2 };
	//Array 2 is set to an Array of double to test the function
	double Array2[] = { 1.3,2.5,3.7 };
	//Array 3 is set to an array of string to test the function
	const char* const Array3[] = {"One","Two"};

	//Outputs the value 2 which is the spot 55 is in the int array1
	cout << LinearSearch(Array1,55,5) << endl;
	//Outputs the value 2 which is the spot where 3.7 is in the double array2
	cout << LinearSearch(Array2, 3.7, 3) << endl;
	//Outputs the value 1 which is where the string "Two" is in the string array3
	cout << LinearSearch(Array3, "Two", 2) << endl;


	return 0;
}