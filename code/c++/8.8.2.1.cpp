/*************************************************************************
    * File Name: 8.8.2.1.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-09-02
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int Number = 3;
	int* const pNum1 = &Number;
	*pNum1 = 20;
	int* pNum2 = pNum1;
	Number *= 2;
	cout << *pNum2;
}
