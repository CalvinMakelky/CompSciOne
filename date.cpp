#include <iostream>
#include <string>
#include "date.h"

using namespace std;

int date::getDay()
{
	return day;
}

int date::getMonth()
{
	return month;
}

int date::getYear()
{
	return year;
}

void date::printDate()
{
	cout << year <<"::" << month << "::" << day << endl;
}

bool date::isLeapYear(int y)
{
	if (y % 4 == 0)
		return true;
	else
		return false;
}

void date::setDate(int d, int m, int y)
{
	if (d > 31 || d < 0)
		day = 0;
	else
		day = d;
	if (m>12 || m < 0)
		month = 0;
	else
		month = m;
	if (y >2015 || y < 0)
		year = 0;
	else
		year = y;
}

bool date::equals(date d)
{
	if (year==d.year && month==d.month && day==d.day)
		return true;
	else
		return false;
}

date::date()
{
	year = month = day = 0;
}

date::date(int d, int m, int y)
{
	if (d > 31 || d < 0)
		day = 0;
	else
		day = d;
	if (m>12 || m < 0)
		month = 0;
	else
		month = m;
	if (y >2015 || y < 0)
		year = 0;
	else
		year = y;
}
