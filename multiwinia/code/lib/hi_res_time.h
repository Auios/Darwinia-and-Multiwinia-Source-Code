#ifndef HI_RES_TIME_H
#define HI_RES_TIME_H

void InitialiseHighResTime();
double GetHighResTime();        // Return value in seconds

void SetFakeTimeMode();
void SetRealTimeMode();
void IncrementFakeTime(double _increment);

#endif

