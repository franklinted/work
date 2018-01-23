/***
 * Excerpted from "Test-Driven Development for Embedded C",
 * published by The Pragmatic Bookshelf.
 * Copyrights apply to this code. It may not be used to create training material,
 * courses, books, articles, and the like. Contact us if you are in doubt.
 * We make no guarantees that this code is fit for any purpose.
 * Visit http://www.pragmaticprogrammer.com/titles/jgade for more book information.
***/
/*- ------------------------------------------------------------------ -*/
/*-    Copyright (c) James W. Grenning -- All Rights Reserved          -*/
/*-    For use by owners of Test-Driven Development for Embedded C,    -*/
/*-    and attendees of Renaissance Software Consulting, Co. training  -*/
/*-    classes.                                                        -*/
/*-                                                                    -*/
/*-    Available at http://pragprog.com/titles/jgade/                  -*/
/*-        ISBN 1-934356-62-X, ISBN13 978-1-934356-62-3                -*/
/*-                                                                    -*/
/*-    Authorized users may use this source code in your own           -*/
/*-    projects, however the source code may not be used to            -*/
/*-    create training material, courses, books, articles, and         -*/
/*-    the like. We make no guarantees that this source code is        -*/
/*-    fit for any purpose.                                            -*/
/*-                                                                    -*/
/*-    www.renaissancesoftware.net james@renaissancesoftware.net       -*/
/*- ------------------------------------------------------------------ -*/

#include "LightScheduler.h"
#include "LightController.h"
#include "common.h"

enum
{
    UNUSED = -1,
    TURN_OFF, TURN_ON,
    MAX_EVENTS = 128
};

typedef struct
{
	int id;
	int minuteOfDay;
	int event;
	Day day;
} ScheduledLightEvent;

static ScheduledLightEvent scheduledEvent;

void LightScheduler_Create(void)
{
	scheduledEvent.id = UNUSED;
	TimeService_SetPeriodicAlarmInSeconds(60,LightScheduler_Wakeup);
}

void LightScheduler_Destroy(void)
{
	TimeService_CancelPeriodicAlarmInSeconds(60,LightScheduler_Wakeup);
}

static void scheduleEvent(int id, Day day, int minuteOfDay, int event)
{
	scheduledEvent.id = id;
	scheduledEvent.minuteOfDay = minuteOfDay;
	scheduledEvent.event = event;
	scheduledEvent.day = day;
}

void LightScheduler_ScheduleTurnOn(int id, Day day, int minuteOfDay)
{
	scheduleEvent(id, day, minuteOfDay, TURN_ON);
}

void LightScheduler_ScheduleTurnOff(int id, Day day, int minuteOfDay)
{
    scheduleEvent(id, day, minuteOfDay, TURN_OFF);
}

static void operateLight(ScheduledLightEvent * lightEvent)
{
	if(lightEvent->event == TURN_ON)
		LightController_On(lightEvent->id);
	else if(lightEvent->event == TURN_OFF)
		LightController_Off(lightEvent->id);
}

static void processEventsDueNow(Time * time, ScheduledLightEvent * lightEvent)
{
	int reactionDay = lightEvent->day;
    int today = time->dayOfWeek;

	if (lightEvent->id == UNUSED)
		return;

	if (lightEvent->day != EVERYDAY &&reactionDay != today)
		return;

	if (lightEvent->minuteOfDay != time->minuteOfDay)
		return;

	operateLight(lightEvent);
}

void LightScheduler_Wakeup(void)
{
    Time time;
    TimeService_GetTime(&time);

	processEventsDueNow(&time, &scheduledEvent);
}

