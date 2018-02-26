/*************************************************************************
    * File Name: 16.3.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-17
 ************************************************************************/

#include<string>
#include<iostream>
using namespace std;

int main()
{
	string strSample1 ("Hello");
	string strSample2 (" String!");

	// Concatenate
	strSample1 += strSample2;
	cout << strSample1 << endl << endl;

	string strSample3 (" Fun is not need to use pointers!");
	strSample1.append (strSample3);
	cout << strSample1 << endl << endl;

	const char* constCStyleString = " You however still can!";
	strSample1.append (constCStyleString);
	cout << strSample1 << endl;

	return 0;
}

