#include "CppUTest/TestHarness.h"
#include "SwordForOffer.h"

TEST_GROUP(SwordForOffer)
{
	void setup()
	{
		return;
	}
	void teardown()
	{
		return;
	}
};

TEST(SwordForOffer, Singleton)
{
	President& OnlyPresident = President::GetInstance();
	OnlyPresident.SetName("Abraham Lincoln");

	//uncomment lines to see how compile failures prohibits duplicates
	//President Second; //cannot access constructor
	//President* Third = new President(); //cannot access constructor
	//President Fourth = OnlyPresident;  //cannot access copy constructor
	//OnlyPresident = President::GetInstance(); //cannot access operator=

	cout << "The name of the President is:";
	cout << President::GetInstance().GetName() << endl;

	return;
}
