#include <iostream>
#include <string>
#include "clock.h"

using namespace std;

void time::setTime(int h, int m, int s)
{
	if (h > 23 | h < 0)
		hr = 0;
	else
		hr = h;
	if (m>59 | m < 0)
		min = 0;
	else
		min - m;
	if (s>59 | s < 0)
		sec = 0;
	else
		sec = s;
}

int time::getHour()
{
	return hr;
}

int time::getMin()
{
	return min;
}

int time::getSec()
{
	return sec;
}

time::time()
{
	hr = min = sec = 0;
}


time::time(int h, int m, int s)
{
	if (h > 23 | h < 0)
		hr = 0;
	else
		hr = h;
	if (m>59 | m < 0)
		min = 0;
	else
		min - m;
	if (s>59 | s < 0)
		sec = 0;
	else
		sec = s;
}
void time::printTime()
{
	cout << hr << "::" << min << "::" << sec << endl;
}

void time::incrHour()
{
	hr++;
	if (hr > 23)
		hr = 0;
}

void time::incrMin()
{
	min++;
	if (min > 59)
		min = 0;
}

void time::incrSec()
{
	sec++;
	if (sec > 59)
		sec = 0;
}

void time::equal(time)
{
	if (hr==c.hr && min == c.min && sec == c.sec)
		return true;
	else
		return false;
}
