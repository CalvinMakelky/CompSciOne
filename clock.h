#include<iostream>

#ifndef CLOCK_H
#define CLOCK_H

class time
{
private:
	int hour;
	int min;
	int sec;

public:
	time Clock();
	time Clock(int, int, int);
	//public constructors

	void setTime(int, int, int);
	int getHour();
	int getMin();
	int getSec();

	void printTime();
	void incrHour();
	void incrMin();
	void incrSec();

	bool equal(time);

};
#endif
