/*************************************************************************
    * File Name: 16.6.2.4.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-19
 ************************************************************************/

#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	string str1 ("I"), str2 ("Love"), str3 ("STL"), str4("String");
	string strresult;
	strresult = str1.append(" ") + str2.append(" ") + str3.append(" ")
		+ str4.append(" ");
	cout << strresult << endl;
}
