/*************************************************************************
    * File Name: 17.7.2.1.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-20
 ************************************************************************/

#include<string>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

char DisplayOptions()
{
	cout << "Please enter your choice!" << endl;
	cout << "1-store an integer in vector vecInt!" << endl;
	cout << "2-query the value of vector[Index]!" << endl;
	cout << "3-if the value is in the vecInt!" << endl;
	cout << "4-exit!" << endl << "> ";

	char ch;
	cin >> ch;

	return ch;
}


int main()
{
	vector <int> vecData;

	char chUserChoice = '\0';
	while ((chUserChoice = DisplayOptions())!= '4')
	{
		switch (chUserChoice)
		{
		case '1':
		{
			cout << "Please enter an integer to be inserted: ";
			int nDataInput = 0;
			cin >> nDataInput;

			vecData.push_back(nDataInput);
		}
			break;
		case '2':
		{
			cout << "Please enter an index between 0 and ";
			cout << (vecData.size() - 1) << ": ";
			int nIndex = 0;
			cin >> nIndex;

			if (nIndex < (vecData.size()))
			{
				cout << "Element [" << nIndex << "]= "<< vecData[nIndex];
				cout << endl;
			}
		}
			break;
		case '3':
		{
			cout << "The contents of the vector are: ";
			for (size_t nIndex = 0; nIndex < vecData.size(); ++nIndex)
				cout << vecData[nIndex] << ' ';
			cout << endl;
		}
			break;
		default:
			break;
		}
	}
	return 0;
}

