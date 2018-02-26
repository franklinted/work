/*************************************************************************
    * File Name: 16.6.cpp
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
	string strSample ("Hello String! We will reverse you!");
	cout << "The original sample string is: " << endl;
	cout << strSample << endl << endl;

	reverse (strSample.begin(), strSample.end());
	cout << "After applying the std::reverse algorithm: " << endl;
	cout << strSample << endl;

	return 0;
}
