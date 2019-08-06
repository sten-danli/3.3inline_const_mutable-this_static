#include "Time.h"
#include<iostream>
using namespace std;


Time::Time(int tmphour, int tmpmin, int tmpsec): Hour(tmphour),Minute(tmpmin),Second(tmpsec){}

void Time::initMilisecond(int mls)
{
	Millisecond = mls;
}
