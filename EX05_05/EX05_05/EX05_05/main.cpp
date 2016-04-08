/////////
//Vince Porporato
//HW 05_05 Ex. 11.13 The course class
///////

#include <iostream>
#include "Course.h"
using namespace std;

//This function doubles the size of the array
int* doubleCapacity(const int* list, int size) {
	int* doubleArray = new  int[size * 2];
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
	Course course1("Data Structures", 10);
	Course course2("Database Systems", 15);

	course1.addStudent("Peter Jones");
	course1.addStudent("Brian Smith");
	course1.addStudent("Anne Kennedy");

	course2.addStudent("Peter Jones");
	course2.addStudent("Steve Smith");

	cout << "Number of students in course1" << course1.getNumberOfStudents() << "\n";
	string* students = course1.getStudents();
	for (int i = 0;i < course1.getNumberOfStudents();i++)
		cout << students[i] << ", ";

	cout << "\nNumber of students in course2: " << course2.getNumberOfStudents() << endl;
	students = course2.getStudents();
	for (int i = 0;i < course2.getNumberOfStudents();i++)
		cout << students[i] << ", ";

	return 0;
}