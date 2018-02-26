/*************************************************************************
    * File Name: 11.6.1.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-09-15
 ************************************************************************/

#include<iostream>
using namespace std;

class Sharp
{
	virtual void Area() = { 0 };
	virtual void Print() = { 0 };
};

class Circle: public Sharp
{
	void Area() {}
	void Print() {}
};

class Triangle: public Sharp
{
	void Area() {}
	void Print() {}
};
