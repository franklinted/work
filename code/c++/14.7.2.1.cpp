/*************************************************************************
    * File Name: 14.7.2.1.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-10-16
 ************************************************************************/

#define MULTI(a,b) ((a)*(b))

template<typename T>
const T& MULTI(const T& x)
{
	return x*x;
}

template<typename T)
void swap(T& x,T& y)
{
	T temp = x;
	x = y;
	y = temp;
}

template<typename ArrayType1,typename ArrayType2)
class TwoArrays
{
private:
	Array1Type Array1 [10];
	Array2Type Array2 [10];
public:
	Array1Type& GetArray1Element(int Index){return Array1[Index];}
	Array2Type& GetArray2Element(int Index){return Array2[Index];}
};


#include<iostream>
using namespace std;

