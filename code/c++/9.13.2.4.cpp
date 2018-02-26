/*************************************************************************
    * File Name: 9.13.2.4.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-09-04
 ************************************************************************/

#include<iostream>
using namespace std;

class Circle
{
	double Pi;
	double Radius;

public:
	Circle(double InputRadius) : Radius(InputRadius), Pi(3.1416) {}
	double GetCircumference()
	{
		return 2 * Pi * Radius;
	}

    double GetArea()
	{
		return Pi * Radius * Radius;
	}
};

int main()
{
	cout << "Enter Radius: ";
	double Radius = 0.0;
	cin >> Radius;

	Circle MyCircle(Radius);

	cout << "Circumference = " << MyCircle.GetCircumference() << endl;
	cout << "Area = " << MyCircle.GetArea() << endl;

	return 0;
}

