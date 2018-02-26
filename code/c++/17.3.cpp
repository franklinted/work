/*************************************************************************
    * File Name: 17.3.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-19
 ************************************************************************/

#include<vector>
#include<iostream>
using namespace std;

void DisplayVector(const vector<int>& vecInput)
{
	for (auto iElement = vecInput.cbegin(); // auto and cbegin(): C++11
		 iElement != vecInput.cend();       // cend is new in C++11
		 ++ iElement )
		cout << *iElement << ' ';

	cout << endl;
}

int main()
{
	// Instantiate a vector with 4 elements, each initialized to 90
	vector <int> vecIntegers (4, 90);

	cout << "The initial contents of the vector: ";
	DisplayVector(vecIntegers);

	// Insert 25 at the beginning
	vecIntegers.insert (vecIntegers.begin (), 25);

	// Insert 2 numbers of value 45 at the end
	vecIntegers.insert (vecIntegers.end (), 2, 45);

	cout << "Vector after inserting elements at beginning and end: ";
	DisplayVector(vecIntegers);

	// Another vector containing 2 elements of value 30
	vector <int> vecAnother (2,30);

	// Insert two elements from another container in position [1]
	vecIntegers.insert (vecIntegers.begin() + 1,
		vecAnother.begin(), vecAnother.end());

	cout << "Vector after inserting contents from another vector: ";
	cout << "in the middle:" << endl;
	DisplayVector(vecIntegers);

	return 0;
}
