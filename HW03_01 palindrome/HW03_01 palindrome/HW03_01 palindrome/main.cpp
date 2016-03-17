///////////////
//Name: Vince Porporato
//Assignment: HW03_01 Ex.10.5, check palindrome
//Section: CS172-2
///////

#include<iostream>
#include <stack>		// allows the stack library to be used
#include<string>
using namespace std;

bool isPalindrome(const string& s) {		//constucts the stack
	stack<char> stackofLetters;

	for (int i = 0;i < s.size();i++) {	//uses a for loop to store the letters into the stack
		tolower(s[i]);
		stackofLetters.push(s[i]);
	}
	
	for (int i = 0;i < s.size();i++){		//this loop returns false when the lower character does not equal the top character in the stack
			if (s[i] != stackofLetters.top())
				return false;
	}
	return true;	//Otherwise it will return true that the phrase the user enters is a palindrome
}



int main()
{
	string s;

	//Has the user enter in a string
	cout << "Enter a phrase to check to see whether or not its a palindrome: ";
	std::cin >> s;
	cout << endl;


	//These two if loops are used to output back whether or not it is a palindrome based on if it returned true or false in the 
	// isPalindrome function
	if (isPalindrome(s) == true) {
		cout << s << " is a palindrome" << endl;
	}

	else {
		cout << s << " is not a palindrome" << endl;
		
	}
	return 0;
}