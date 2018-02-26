/*************************************************************************
    * File Name: 18.1.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-20
 ************************************************************************/

#include<string>
#include<algorithm>
#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main()
{
	// instantiate an empty list
	list <int> listIntegers;

	// instantiate a list with 10 integers
	list<int> listWith10Integers(10);

	// instantiate a list with 4 integers, each initialized to 99
	list<int> listWith4IntegerEach99 (10, 99);

	// create an exact copy of an existing list
	list<int> listCopyAnother(listWith4IntegerEach99);

	// a vector with 10 integers, each 2011
	vector<int> vecIntegers(10,2011);

	// instantiate a list using values from another container
	list<int> listContainsCopyOfAnother(vecIntegers.cbegin(), vecIntegers.cend());

	return 0;
}
