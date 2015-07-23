#include <string>
#include "student.h"

using namespace std;

string student::getemail()
{
	return email;
}
string student::getname()
{
	return name;
}

string student::getaddress()
{
	return address;
}
string student::getanumber()
{
	return anumber;
}

float student::calculategpa(float f1, float f2, float f3)
{
	return (f1 + f2 + f3) / 3.0;
}

float student::calculatenetpay(float p)
{
	return p*15.0;
}
