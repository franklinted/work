/*************************************************************************
    * File Name: 10.9.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-09-07
 ************************************************************************/

#include<iostream>
using namespace std;

class Motor
{
public:
	void SwitchIgnition()
	{
		cout << "Ignition ON" << endl;
	}
	void PumpFuel()
	{
		cout << "Fuel in cylinders" << endl;
	}
	void FireCylinders()
	{
		cout << "Vroooom" << endl;
	}
};

class Car:protected Motor
{
public:
	void Move()
	{
		SwitchIgnition();
		PumpFuel();
		FireCylinders();
	}
};

class SuperCar:protected Car
{
public:
	void Move()
	{
		SwitchIgnition();   // has access to base members
		PumpFuel();			// due to "protected" inheritance between Car and Motor

		FireCylinders();
		FireCylinders();
		FireCylinders();
    }
};

int main()
{
	SuperCar myDreamCar;
	myDreamCar.Move();

	return 0;
}
