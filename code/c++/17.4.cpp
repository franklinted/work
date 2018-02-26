/*************************************************************************
    * File Name: 17.4.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-19
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	using namespace std;
	vector <int> vecIntegerArray = {50, 1, 987, 1001};

    for (size_t Index = 0; Index < vecIntegerArray.size(); ++Index)
	{
		cout << "Element[" << Index << "] = ";
		cout << vecIntegerArray.at(Index) << endl;
	}

	// changing 3rd integer from 987 to 2011;
    vecIntegerArray[2] = 2011;
	cout << "After replacement: " << endl;
	cout << "Element[2] = " << vecIntegerArray[2] << endl;

	return 0;
}
