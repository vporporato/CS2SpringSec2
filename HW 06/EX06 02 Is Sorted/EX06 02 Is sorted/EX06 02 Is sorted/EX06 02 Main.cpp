////////
//Vince Porporato
//CS 172-2
//EX06 02 Is Sorted?
////////

#include <iostream>
using namespace std;

//Function to check if the elements in the array are sorted or not
template <typename T>
bool isSorted(const T list[], int size)
{
	//This for loop goes through the array to see if the elements are sorted
	// i<size-1 so the loop while stop before it reaches the last element in the array
	for (int i = 0;i < size-1;i++)
	{
		T curr = list[i];		//current element
		T next = list[i + 1];	//next element in the array 
		if (next < curr)
			return false;
	}
		return true;
}

int main() 
{
	//These three arrays are set to an array of int, double and string
	int Array1[] = { 1,5,2,3,4 };		//returns false
	double Array2[] = { 1.5,2.3,4.4,5.1,6.2 };		//returns true
	const char* const Array3[] = { "A","C","D","B" };		//returns false

	//Outputs if the int array is sorted
	cout << isSorted(Array1, 5) << endl;
	//Outputs if the double array is sorted
	cout << isSorted(Array2, 5) << endl;
	//Outputs if the string array is sorted
	cout << isSorted(Array3, 4) << endl;

	return 0;
}