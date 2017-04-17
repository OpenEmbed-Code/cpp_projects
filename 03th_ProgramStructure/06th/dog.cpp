#include "dog.h"
namespace C{
using namespace std;
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
	cout<<"name = "<<name<<"age = "<<age<<endl;
}

void printVersion(void)
{
	cout<<"Dog V1,by weidongshan "<<endl;
}

}