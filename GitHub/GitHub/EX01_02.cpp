////
//Name: Vince Porporato
//Class: CS-172
//Assignment: Assignment 1: Excersie 2
//2/9/16
/////

#include <iostream>
#include<ctime>
#include<cmath>
#include<string>
using namespace std;


void ex02();
void ex03();
void ex04();
void ex05();
void addIntegers();

int main()
{
 ex02();
 ex03();
 ex04();
 ex05();

 return 0;
}

void ex02()
{
	//A) Intiate variables for the function ex02
	bool hasPassedTest = true;

	//B) set random numbers for x and y
	srand(time(NULL));
	int x = rand() % 100;
	int y = rand() % 100;

	//If statements to output whether or not x is greater or equal to y
	if (x >= y)
		cout << "X is greater than or equal to y." << endl;
	else if (x < y)
		cout << "X is not greater than or equal to y." << endl;
	cout << endl;

	//C) This code has the user enter a number that gets stored to numberOfShares
	int numberOfShares;
	cout << "Enter a number: ";
	cin >> numberOfShares;
	cout << endl;
	
	//Checks to see if the number is greater or less than 100 and outputs that to the user.
	if (numberOfShares < 100)
		cout << numberOfShares << " is less than 100." << endl;
	else if (numberOfShares>100)
		cout << numberOfShares << " is not less than 100." << endl;

	//D) Sets variables for function, and has the user enter numbers for the widths of the box and book
	int boxWidth; int bookWidth;
	cout << "Enter the width of the box: ";
	cin >> boxWidth; cout<< endl;
	cout << "Enter the width of the book: ";
	cin >> bookWidth;
	cout << endl;

	//Checks to see whether or not the box width is evenly distributed by the book width or not. 
	if (boxWidth % bookWidth == 0)
		cout << "The box width is evenly distributed by the book width" << endl;
	else if (boxWidth % bookWidth != 0)														
		cout << "The box width is not evenly distributed by the book width." << endl;

	//E) Sets the variables for shelf life and temperature and has the user input them
	int shelfLife;
	cout << "What is the shelf life of a box of chocolate: ";
	cin >> shelfLife;
	int temperature;
	cout << "What is the outside temperature: ";
	cin >> temperature;

	//Outputs the new shelf life of the chocolate, depending on the temperature
	if (temperature > 90)
		cout << "The new shelf life is " << shelfLife - 4 << endl;
	else if(temperature<90)
		cout << "The shelf life is not affected by the heat." << endl;

}

void ex03()
{
	//A) Declares variables for function, has user enter an area
	double area; 
	cout << "Enter the area of a square: ";
	cin >> area; 
	cout << endl;

	//Equations to first calculate the length,then calculate diagonal and output that to the user
	double length = sqrt(area);
	double diagonal = sqrt(2*((length*length)));
	cout << "The length of the diagonal is: " << diagonal << endl;
	
	//B) declares the variables and has the user enter either y or n
	cout << "Enter either the letter y or n: ";
	char letter;
	cin >> letter;
	cout << endl;
	char y; char n;

	//Displays either yes or no depending on what the user enters
	if (letter == 'y')
		{
		cout << "yes" << endl;
		}
	if (letter == 'n' || letter == 'N')
		{
		cout << "no" << endl;
		}

//	/C) Initialeized a char variable tab to the tab character
	char tab = '/t';

	cin.ignore();
	//D) Declare mailing address as a string
	std::string mailingAddress = "";

	//have the user enter address and output it back to the user
	cout << "Please enter your mailing address: ";
	std::getline(std::cin, mailingAddress);
	cout << endl;
	cout << "Your address is " << mailingAddress << endl;

	//E) intitialize a string variable to the empty string
	string k = "";
}

//Function for part E that doubles the number that the user imputes in part A
int doubleNumber(int number)
{
	number = number * 2;
	return number;
}

//Function for part F that adds two random numbers togehter
void addIntegers()
{
	srand(time(NULL));
	int Num1 = rand() % 100;
	int Num2 = rand() % 100;
	int Intsum = Num1 + Num2;
	cout << Num1 << " + " << Num2 << " = " << Intsum;
}

//Function for part G that adds one to its parameter, adds one to the number that the users enters in part A
int addParameter(int &number)
{
	number++;
	return number;
}

void ex04()
{
	//A) Declare variable number and ask the user to enter a number
	int number;
	cout << "Enter a number between 1 and 10: ";
	cin >> number;
	cout << endl;

	//Run a loop until the user enters a valid answer
	while (number > 10)
		{
			cout << "Invalid answer: Please enter a number between 1 and 10: ";
			cin >> number;
		}
	cout << "Valid Answer." << endl;
	
	//B) Intiate the sum to 0, and calculate the sum of the cubes from 1 to the number entered in part A
	int sum = 0;
	for (int i = 0;i <= number;i++)
	{
		sum= sum+i*i*i;
		cout << sum << "   ";
	}
	cout << endl;
	cout << "The sum of the cubes from 1 to " << number << " is: " << sum << endl;
	
	//C) intiate the variable asterick to 0, run a do loop until asterick to the number in part A
	int asterick = 0;
	do
		{
			asterick++;
			cout << "* ";
		} while (asterick < number);
		cout << endl;

	//D) have a for loop that calculates the even numbers between 0 and 40 by running a loop from 0 to 20,
	// and inside the loop have the equation 2*Num to calculate the even numbers.
	for (int Num = 0;Num <= 20;Num++)
		{
			int evenNum = 2 * Num;
			cout << evenNum << "  ";
		}
	cout << endl;

	//E) Times the number in part A by 2
	int x=doubleNumber(number);
	cout << x << endl;

	//F) Generated two random numbers Num1 and Num2, and add those numbers together.
	addIntegers();
	cout << endl;
	

	//G) create a function that adds one to its parameter
	int p = addParameter(number);
	cout << p << endl;

}

//Function for part C that outputs the numbers in the array
int outputArray(int storeIntegers[5])
{
	for (int i = 0;i <5;i++)
		cout << storeIntegers[i] << "    ";
	return storeIntegers[5];
}

//Function for part D that checks whether or not a value is in the array
int value;
int containsValue(int storeIntegers[5])
{
	cout << "Enter a value: ";
	cin >> value;
	//Run a for loop to check if the value the user enters is in the array and in what spot
	for (int i = 0;i < 5; i++)
		if (storeIntegers[i] == value)
			cout << "The value is in this spot." << endl;
		else if (storeIntegers[i] != value)
			cout << "The value is not in the spot." << endl;

	return storeIntegers[5];
}

void ex05()
{
	//A) loop that stores five integers that the user enters into an array
	int storeIntegers[5];
	cout << "Enter an integer: ";
	int i = 0;
	for (i = 0;i < 5;i++)
	{
		cin >> storeIntegers[i];
		if (i <= 3)
			cout << "Enter another integer: ";
		else
			cout << "";
	}

	//B) Calculates the sum and product of the integers in the array
	//calculates the sum of all the integers
	int sum = 0;
	while (i <=5 && i>0)
	{
		i--;
		storeIntegers[i];
		sum = sum + storeIntegers[i];
		cout << sum << "    ";
	}
	cout << endl;
	//calculates the product of all the integers
	int product = 1;
	while (i >= 0 && i <= 4)
	{
		storeIntegers[i];
		product = product*storeIntegers[i];
		cout << product << "    ";
		i++;
	}
	cout << endl;

	//C) outputs the values that are stored in the array in part A
	int x = outputArray(storeIntegers);
	cout << endl;

	//D) function that outputs whether or not the array contains a certain value
	int y = containsValue(storeIntegers);
}