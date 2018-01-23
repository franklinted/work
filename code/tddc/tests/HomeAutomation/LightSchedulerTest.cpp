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
#include "LightScheduler.h"
#include "LightControllerSpy.h"
#include "FakeTimeService.h"
}

TEST_GROUP(LightScheduler)
{
	void setup()
	{
		LightController_Create();
		LightScheduler_Create();
	}

	void teardown()
	{
		LightScheduler_Destroy();
		LightController_Destroy();
	}
};


void setTimeTo(int day, int miniteOfDay)
{
	FakeTimeService_SetDay(day);
	FakeTimeService_SetMinute(miniteOfDay);
}

void checkLightState(int id, int level)
{
	LONGS_EQUAL(id, LightControllerSpy_GetLastId());
	LONGS_EQUAL(level, LightControllerSpy_GetLastState());
}

TEST(LightScheduler, ScheduleWeekEndItsMonday)
{
	LightScheduler_ScheduleTurnOn(3, WEEKEND, 1200);
	setTimeTo(MONDAY, 1200);
	LightScheduler_Wakeup();
	checkLightState(LIGHT_ID_UNKNOWN, LIGHT_STATE_UNKNOWN);
}

TEST(LightScheduler, ScheduleOnEverydayNotTimeYet)
{
	LightScheduler_ScheduleTurnOn(3,EVERYDAY,1200);
	setTimeTo(EVERYDAY, 1200);
	LightScheduler_Wakeup();
	checkLightState(3, LIGHT_ON);
}

TEST(LightScheduler, NoScheduleNothingHappens)
{
	setTimeTo(MONDAY, 100);
	LightScheduler_Wakeup();
	checkLightState(LIGHT_ID_UNKNOWN, LIGHT_STATE_UNKNOWN);
}

TEST(LightScheduler, ScheduleTuesdayButItsMonday)
{
	LightScheduler_ScheduleTurnOn(3, TUESDAY, 1200);
	setTimeTo(MONDAY, 1200);
	LightScheduler_Wakeup();
	checkLightState(LIGHT_ID_UNKNOWN, LIGHT_STATE_UNKNOWN);
}

TEST(LightScheduler, ScheduleTuesdayAndItsTuesday)
{
	LightScheduler_ScheduleTurnOn(3,TUESDAY,1200);
	setTimeTo(TUESDAY, 1200);
	LightScheduler_Wakeup();
	checkLightState(3, LIGHT_ON);
}

TEST_GROUP(LightSchedulerInitAndCleanup)
{

};

TEST(LightSchedulerInitAndCleanup, CreateStartsOneMinuteAlarm)
{
	LightScheduler_Create();
	POINTERS_EQUAL((void *)LightScheduler_Wakeup, (void *)FakeTimeSource_GetAlarmCallback());
	LONGS_EQUAL(60, FakeTimeSource_GetAlarmPeriod());
	LightScheduler_Destroy();
}

TEST(LightSchedulerInitAndCleanup, DestroyCancelsOneMinuteAlarm)
{
	LightScheduler_Create();
	LightScheduler_Destroy();
	POINTERS_EQUAL(NULL, (void *)FakeTimeSource_GetAlarmCallback());
}
