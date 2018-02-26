/*************************************************************************
    * File Name: 10.2.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-09-04
 ************************************************************************/

#include<iostream>
using namespace std;

class Fish
{
protected:
	bool FreshWaterFish; // accessible only to derived classes

public:
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
	Tuna()
	{
		FreshWaterFish = false; // set base class protected member
	}
};

class Carp: public Fish
{
public:
	Carp()
	{
		FreshWaterFish = true;
	}
};

int main()
{
	Carp myLunch;
	Tuna  myDinner;

	cout << "Getting my food to swim" << endl;

	cout << "Lunch: ";
	myLunch.Swim();

	cout << "Dinner: ";
	myDinner.Swim();

	// uncomment line below to see that protected members
	// are not accessible from outside the class hierarchy.
	// myLunch.FreshWaterFish = false;

	return 0;
}

