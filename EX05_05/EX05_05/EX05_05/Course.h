#ifndef Course_H
#define Course_H
#include<string>
#include<iostream>
using namespace std;

class Course
{
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;
public:
	Course(const string& courseName, int capacity);
	Course();
	string getCourseName() const;
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string* getStudents() const;
	int getNumberOfStudents() const;
};

#endif