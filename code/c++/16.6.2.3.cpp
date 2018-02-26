/*************************************************************************
    * File Name: 16.6.2.3.cpp
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
	cout << "Please enter a sentence!" << endl;
	cout << "> ";
	string strInput;
	getline(cin, strInput);
	cout << endl;
	for(size_t nCharIndex = 0; nCharIndex < strInput.length();++nCharIndex)
	{
		strInput[nCharIndex] = toupper(strInput[nCharIndex]);
		++nCharIndex;
	}

	cout << strInput << endl;

	return 0;
}

