/*************************************************************************
    * File Name: 18.8.4.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-22
 ************************************************************************/

#include<list>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

template <typename T>
void DisplayContents(const T& Input)
{
	for (auto iElement = Input.begin();iElement != Input.end();
		++iElement)
		cout << *iElement << " ";
	cout << endl;
}

int main()
{
	list <string> listNames = {"Jack", "John", "Anna", "Skate"};

	cout << "The contents of the list are: ";
	DisplayContents(listNames);

	cout << "The contents after reversing are: ";
	listNames.reverse();
	DisplayContents(listNames);

	cout << "The contents after sorting are: ";
	listNames.sort();
	DisplayContents(listNames);

    return 0;
}
