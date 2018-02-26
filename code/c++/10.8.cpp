/*************************************************************************
    * File Name: 10.8.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-09-06
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

class Car:private Motor
{
public:
	void Move()
	{
		SwitchIgnition();
		PumpFuel();
		FireCylinders();
	}
};

int main()
{
	Car myDreamCar;
	myDreamCar.Move();

	return 0;
}

