/*************************************************************************
    * File Name: 9.1.cpp
    * Author: Franklin
    * Mail: stranger_2000@163.com
    * Created Time: 2017-09-02
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
	string Name;
	int Age;
public:
	void SetName (string HumansName)
	{
		Name = HumansName;
	}

	void SetAge(int HumansAge)
	{
		Age = HumansAge;
	}

	void IntroduceSelf()
	{
		cout << "I am " + Name << " and I am ";
		cout << Age << " years old" << endl;
	}
};

int main()
{
	// Constructing an object of class Human with attribute Name as "Adam"
	Human FirstMan;
	FirstMan.SetName("Adam");
	FirstMan.SetAge(30);

	// Constructing an object of class Human with attribute Name as "Adam"
	Human FirstWoman;
	FirstWoman.SetName("Eve");
	FirstWoman.SetAge(28);

	FirstMan.IntroduceSelf();
	FirstWoman.IntroduceSelf();
}
