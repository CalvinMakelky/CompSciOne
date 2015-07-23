#include<string>

#ifndef STUDENT_H
#define STUDENT_H

class student
{
private:
	std::string name;
	std::string email;
	std::string address;
	std::string anumber;
	student();
public:
	student(std::string, std::string);
	student(std::string, std::string, std::string, std::string);
	std::string getname();
	std::string getemail();
	std::string getaddress();
	std::string getanumber();

	float calculategpa(float, float, float);
	float calculatenetpay(float);

};
#endif
