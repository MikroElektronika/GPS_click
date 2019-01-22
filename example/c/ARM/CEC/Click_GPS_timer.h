/*

Use mikroE Timer Calculator to generate proper timer configuration
and timer ISR.

https://www.mikroe.com/timer-calculator

*/
#include "Click_GPS_types.h"

uint32_t timerCounter = 0;

static void gps_configTimer()
{


    // Configure Timer
}

void Timer_interrupt()
{
    gps_tick();
	timerCounter++;
    // Reset Flag
}