/////////
//Vince Porporato
//CS 172-2
//EX06 04 Shuffle Vector
////

#include <iostream>
#include <vector>
using namespace std;

//this function is used to shuffle the numbers in the vector
template  <typename V>
void shuffle(vector<V> &v)
{
	for (int i = 0;i < v.size();i++)
	{	
		//this randomly stores a number into a temporary spot at v[i]
		int index = rand() % v.size();	
		V temp = v[index];
		v[index] = v[i];
		v[i] = temp;
	}
}


int main()
{
	//int the vector s
	vector<int> s;
	//the numbers 1-10 are getting pushed into the vector s
	s.push_back(1);
	s.push_back(2);
	s.push_back(3);
	s.push_back(4);
	s.push_back(5);
	s.push_back(6);
	s.push_back(7);
	s.push_back(8);
	s.push_back(9);
	s.push_back(10);

	shuffle(s);		//calls the shuffle function from above with the vector s
	cout << "The shuffled numbers from 1-10 are: " << endl;

	//This outputs the numbers in a shuffled order
	for (int i = 0;i < s.size();i++)
		cout << s[i] << "   ";
		cout << endl;
		return 0;
	

}