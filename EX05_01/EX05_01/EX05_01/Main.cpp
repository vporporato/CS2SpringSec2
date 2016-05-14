//////
//Name: Vince Porporato
//Assignment: HW05_01 Analyze Input
//class: cs172-2
//////

/*Derek- This is great Vince well done 
20/20*/
#include <iostream>
using namespace std;

//This function asks the user how many numbers they would like to enter and stores that in size
void prompt_count(int* size) {
	cout << "How many numbers would you like to average? " << endl;
	cin >> *size;
}

//Function that defines the array for the program
int*alloc_array(int size) {
	//allocate array
	int* pointarray =new  int[size];
	
	//initialize array
	for (int i = 0;i < size;i++)
		pointarray[i] = 35;

	//return array point
	return pointarray;
}

//This function runs a loop until the user enters the amount of numbers which was stored in size
void populate_numbers(int*numbers, int size) {
	for (int*current = numbers;current < numbers + size;current++) {
		cout << "Enter number: " << endl;
		cin >> *current;
	}
}

//this function calculates the average of the numbers stored in the array
double averageofNumbers(int* numbers, int size) {

	//This for loop adds up the total value of all of the numbers int the array
	int totalsum = 0;
	for (int *current = numbers;current < numbers + size;current++) {
		totalsum = totalsum + *current;
	}
	//calculates the average 
	return totalsum / size;
}

//Function to count how many of the numbers in the array are greater than the average
int greaterthanAverage(int* numbers, int size,double average) {
	int count = 0;
	for (int *current = numbers; current < numbers + size;current++) {
		if (*current > average)
			count++;
	}
	return count;
}



int main() 
{
	int num;

	prompt_count(&num);	//Displays the prompt function above

	int* numbers = alloc_array(num);	//initializes the array to the variable numbers
	populate_numbers(numbers, num);	//this uses the function above where the user enters the numbers that get stored in the array
	cout << "The average of the numbers are "<< averageofNumbers(numbers, num) << endl;		//ouptuts the average
	double average = averageofNumbers(numbers, num);	//defines average so it can be called in greaterthanAverage
	cout << "There is " << greaterthanAverage(numbers, num,average) << " greater than the average." << endl;

	
	cin >> num;	//This is just to be able to see if the program runs correctly. The program closes right after the last number is entered

	delete[] numbers;
	
}