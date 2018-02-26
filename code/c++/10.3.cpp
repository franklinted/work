/*************************************************************************
    * File Name: 10.3.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-09-05
 ************************************************************************/

#include<iostream>
using namespace std;

class Fish
{
protected:
	bool FreshWaterFish; // accesible only to derived classes

public:
	// Fish constructor
	Fish(bool IsFreshWater) : FreshWaterFish(IsFreshWater){}

	void Swim()
	{
		if (FreshWaterFish)
			cout << "Swims in lake" << endl;
		else
			cout << "Swims in sea" << endl;
	}
};

class Tuna: public Fish
{
public:
	Tuna(): Fish(false) {}

	void Swim()
	{
		cout << "Tuna swims real fast" << endl;
	}
};

class Carp: public Fish
{
public:
	Carp(): Fish(true) {}

	void Swim()
	{
		cout << "Carp swims real slow" << endl;
        Fish::Swim();
	}
};

int main()
{
	Carp myLunch;
	Tuna myDinner;

	cout << "Getting my food to swim" << endl;

	cout << "Lunch: ";
	myLunch.Swim();

	cout << "Dinner: ";
	myDinner.Swim();

	return 0;
}

