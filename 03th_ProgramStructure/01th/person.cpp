#include <stdio.h>
class person {
//不写public，默认就是private
private:
	char *name;
	int age;
	char *work;
public:
	void setName(char *name);
	int setAge(int age);
	void printInfo(void);
};
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
	printf("name = %s,age = %d,work = %s\n",name,age,work);
}


int main(int argc ,char **argv)
{
	person per;
	per.setName("zhangsan");
	per.setAge(19);
	per.printInfo();
}

