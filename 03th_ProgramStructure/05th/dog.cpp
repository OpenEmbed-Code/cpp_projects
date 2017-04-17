
#include "dog.h"
int i;
namespace C{
void Dog::setName(char *name)
{
	this->name = name;
}
int Dog::SetAge(int age)
{
	if(age <= 0 || age > 20)
	{
		return -1;
	}
	this->age = age;
	return 0;
}

void Dog::printInfo(void)
{
	printf("name = %s,age = %d\n",name,age);
}

void printVersion(void)
{
	printf("Dog V1,by weidongshan\n");
}

}