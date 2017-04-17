#include "person.h"

namespace A{
void person::setName(char *name)
{
	this->name = name;
}

int person::setAge(int age)
{
	if(age <= 0 || age > 150)
	{
		return -1;
	}
	this->age = age;
	return 0;
}
void person::printInfo(void)
{
	std::cout<<"name = "<<name<<" age = "<<age<<" work = "<<work<<std::endl;

}
void printVersion(void)
{
	std::cout<<"Person V1,by weidongshan"<<std::endl;
}

}
