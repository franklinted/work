/*************************************************************************
    * File Name: 12.11.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-09-21
 ************************************************************************/

#include<iostream>
using namespace std;

class CDisplay
{
public:
	void operator () (string Input) const
	{
		cout << Input << endl;
	}
};

int main()
{
	CDisplay mDisplayFuncObject;

	// equivalent to mDisplayFuncObject.operator () ("Display this string!");
	mDisplayFuncObject ("Display this string!");

	return 0;
}
