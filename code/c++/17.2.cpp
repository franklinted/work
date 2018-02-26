/*************************************************************************
    * File Name: 17.2.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-19
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> vecIntegers;

	// Insert sample integers into the vector:
	vecIntegers.push_back (50);
	vecIntegers.push_back (1);
	vecIntegers.push_back (987);
	vecIntegers.push_back (1001);

	cout << "The vector contains ";
	cout << vecIntegers.size () << " Elements" << endl;

	return 0;
}
