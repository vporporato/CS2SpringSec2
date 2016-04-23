/////////
// Vince Porporato
// CS 172-2
// HW06 03 Implement Vector CLass
//////

#include <iostream>
#include <vector>
using namespace std;

template <typename V>
class Vector
{
private:
	V elements[50];
	int vectorsize;     //used for the element type
public:
	Vector();
	Vector(int size);
	Vector(int size, V defaultValue);
	void push_back(V element);
	void pop_back();
	unsigned int size();
	bool const empty();
	V at(int index);
	void clear();
	void swap(Vector v2);
};

// constructor which the vector size is set to 0 since its an empty constructor
template <typename V>
Vector<V>::Vector()
{
	vectorsize = 0;
}

//constuctor with int size set equal to vector size
template <typename V>
Vector<V>::Vector(int size)
{
	vectorsize = size;
}

//customized constructor with the variables size and default value
template <typename V>
Vector<V>::Vector(int size,V defaultValue)
{
	vectorsize = size;
	elements = defaultValue;
}


// appends the element in the vector,
template <typename V>
void Vector<V>::push_back(V element)
{
	elements[vectorsize++] = element;

}

//this function is used to remove the last element from the function
template <typename V>
void Vector<V>::pop_back()
{
	return elements[--vectorsize];
}

//function that returns vector size when the function size() is called
template <typename V>
unsigned int Vector<V>::size()
{
	return vectorsize;
}

// checks if the vector size is empty or not
template<typename V>
bool const Vector<V>::empty()
{
	if (vectorsize == 0)
		return true;
	else
		return false;
}

//returns the element at the given index
template<typename V>
V Vector<V>::at(int index)
{
	return elements[index];
}

//removes all the elements in the vector by setting the vector size to 0
template<typename V>
void Vector<V>::clear()
{
	vectorsize = 0;
}

//swaps the values in the vector with v2
template<typename V>
void Vector<V>::swap(Vector v2)
{
	//swaps the values
	V temp[50];
	int tempSize = v2.size();
	for (int i = 0; i < v2.size(); i++) {
		temp[i] = v2.at(i);
	}

	//clears the content in v2
	v2.clear();
	for (int i = 0; i < size(); i++) {
		v2.push_back(at(i));
	}
	//the clear() is used to set the vector size back to 0,
	clear();
	for (int i = 0; i < tempSize; i++) {
		push_back(temp[i]);
	}
}