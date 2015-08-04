#include <string>

#ifndef DATE_H
#define DATE_H

class date
{
private:
	int day;
	int month;
	int year;
public:
	date(); //public constructor
	date(int, int, int);
	void setDate(int, int, int);
	int getDay();
	int getMonth();
	int getYear();
	void printDate();
	bool equals(date);
	bool isLeapYear(int);

	
};
#endif
