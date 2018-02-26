/*************************************************************************
    * File Name: 22.2.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-31
 ************************************************************************/

#include<string>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vecNums = {25, 101, 2011, -50};

	auto iEvenNum = find_if( vecNums.cbegin(), vecNums.cend(),
			[](const int& Num){return ((Num % 2) != 0); });

	if (iEvenNum != vecNums.cend())
		cout << "Even number in collection is: " << *iEvenNum << endl;

	return 0;
}
