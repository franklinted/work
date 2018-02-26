/*************************************************************************
    * File Name: 16.7.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-17
 ************************************************************************/

#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	using namespace std;

	cout << "Please enter a string for case-convertion:" << endl;
	cout << "> ";

	string strInput,strInput2;
	getline (cin, strInput);
	cout << endl;

	std::transform(strInput.begin(),strInput.end(),strInput2.begin(), strInput.begin(),toupper);
	cout << "The string converted to upper case is: " << endl;
	cout << strInput << endl << endl;

	std::transform(strInput.begin(),strInput.end(),strInput2.begin(), strInput.begin(),tolower);
	cout << "The string converted to lower case is: " << endl;
	cout << strInput << endl << endl;

	return 0;
}
