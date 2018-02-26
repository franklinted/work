/*************************************************************************
    * File Name: 16.6.2.1.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-18
 ************************************************************************/

#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	cout << "Please enter a string for case-convertion:" << endl;
	cout << "> ";

	string strInput,strInput2;
	getline (cin, strInput);
	cout << endl;

	strInput2 = strInput;

	reverse(strInput.begin(),strInput.end());

	if (strInput2 == strInput)
        cout << strInput << " is a palindrome!" << endl;
	else
        cout << strInput << " is not a palindrome!" << endl;
}
