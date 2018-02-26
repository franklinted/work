/*************************************************************************
    * File Name: 14.6.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-16
 ************************************************************************/

#include<iostream>
using namespace std;

template <typename T>
class EverythingButInt
{
public:
	EverythingButInt()
	{
		static_assert(sizeof(T) != sizeof(int), "No int please!");
	}
};

int main()
{
	EverythingButInt<double> test; //template instantiation with int.
	return 0;
}
