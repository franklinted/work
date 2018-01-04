//- ------------------------------------------------------------------
//-    Copyright (c) James W. Grenning -- All Rights Reserved
//-    For use by owners of Test-Driven Development for Embedded C,
//-    and attendees of Renaissance Software Consulting, Co. training
//-    classes.
//-
//-    Available at http://pragprog.com/titles/jgade/
//-        ISBN 1-934356-62-X, ISBN13 978-1-934356-62-3
//-
//-    Authorized users may use this source code in your own
//-    projects, however the source code may not be used to
//-    create training material, courses, books, articles, and
//-    the like. We make no guarantees that this source code is
//-    fit for any purpose.
//-
//-    www.renaissancesoftware.net james@renaissancesoftware.net
//- ------------------------------------------------------------------


#include "CppUTest/TestHarness.h"

extern "C"
{
#include "LedDriver.h"
	//#include "RuntimeErrorStub.h"
}

//START:final
//START: RevisedTestGroupPlusCreate
TEST_GROUP(LedDriver)
{
	uint16_t virtualLeds;

	void setup()
	{
		LedDriver_Create(&virtualLeds);
	}
	void teardown()
	{
		LedDriver_Destroy();
	}
};
//END: RevisedTestGroupPlusCreate

TEST(LedDriver, LedsOffAfterCreate)
{
	//uint16_t virtualLeds = 0xffff;
	LedDriver_Create(&virtualLeds);
	CHECK_EQUAL(0,virtualLeds);
}
//END: StartingPoint

TEST(LedDriver, TurnOnLedOne)
{
	LedDriver_TurnOn(1);
	CHECK_EQUAL(1,virtualLeds);
}

TEST(LedDriver, AllOn)
{
	LedDriver_TurnAllOn();
	CHECK_EQUAL(0xffff,virtualLeds);
}

TEST(LedDriver, TurnOffLedOne)
{
	LedDriver_TurnOn(1);
	LedDriver_TurnOff(1);
	CHECK_EQUAL(0,virtualLeds);
}

TEST(LedDriver, TurnOnMultipleLeds)
{
	LedDriver_TurnOn(9);
	LedDriver_TurnOn(8);
	CHECK_EQUAL(0x180,virtualLeds);
}

TEST(LedDriver, TurnOffAnyLed)
{
	LedDriver_TurnAllOn();
	LedDriver_TurnOff(8);
	CHECK_EQUAL(0xff7f,virtualLeds);
}

TEST(LedDriver, LedMemoryIsNotReadable)
{
	virtualLeds = 0xffff;
	LedDriver_TurnOn(8);
	CHECK_EQUAL(0x80, virtualLeds);
}

TEST(LedDriver, UpperAndLowerBounds)
{
	LedDriver_TurnOn(1);
	LedDriver_TurnOn(16);
	CHECK_EQUAL(0x8001, virtualLeds);
}

TEST(LedDriver, OutOfBoundsTurnOnDoesNoHarm)
{
	LedDriver_TurnOn(-1);
	LedDriver_TurnOn(0);
	LedDriver_TurnOn(17);
	LedDriver_TurnOn(33);
	LedDriver_TurnOn(3141);
	CHECK_EQUAL(0,virtualLeds);
}

TEST(LedDriver, OutOfBoundsTurnOffDoesNoHarm)
{
	LedDriver_TurnAllOn();

	LedDriver_TurnOff(-1);
	LedDriver_TurnOff(0);
	LedDriver_TurnOff(17);
	LedDriver_TurnOff(33);
	LedDriver_TurnOff(3141);
	CHECK_EQUAL(0xffff,virtualLeds);
}

TEST(LedDriver, IsOn)
{
	CHECK_FALSE(LedDriver_IsOn(11));
	LedDriver_TurnOn(11);
	CHECK_TRUE(LedDriver_IsOn(11));
}

TEST(LedDriver, IsOff)
{
	CHECK_TRUE(LedDriver_IsOff(12));
	LedDriver_TurnOn(12);
	CHECK_FALSE(LedDriver_IsOff(12));
}

IGNORE_TEST(LedDriver, OutOfBoundsToDo)
{
	/* TODO: what should we do during runtime? */
}

TEST(LedDriver, OutOfBoundsLedsAreAlwaysOff)
{
	CHECK_TRUE(LedDriver_IsOff(0));
	CHECK_TRUE(LedDriver_IsOff(17));
	CHECK_FALSE(LedDriver_IsOn(0));
	CHECK_FALSE(LedDriver_IsOn(17));
}

TEST(LedDriver, TurnOffMultipleLeds)
{
	LedDriver_TurnAllOn();
	LedDriver_TurnOff(8);
	LedDriver_TurnOff(9);
	CHECK_EQUAL((~0x180)&0xffff, virtualLeds);
}

TEST(LedDriver, AllOff)
{
	LedDriver_TurnAllOn();
	LedDriver_TurnAllOff();
	CHECK_EQUAL(0, virtualLeds);
}
