/*************************************************************************
    * File Name: 17.1.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-19
 ************************************************************************/

#include<string>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> vecIntegers;

	// Instantiate a vector with 10 elements (it can grow larger)
	vector <int> vecWithTenElements (10);

	// Instantiate a vector with 10 elements, each initialized to 90
	vector <int> vecWithTenInitializedElements (10, 90);

	// Instantiate one vector and initialize it to the contents of another
	vector <int> vecArrayCopy (vecWithTenInitializedElements);

	// Using iterators instantiate vector to 5 elements from another
	vector <int> vecSomeElementsCopied ( vecWithTenElements.cbegin (), vecWithTenElements.cbegin() + 5 );

	return 0;
}
