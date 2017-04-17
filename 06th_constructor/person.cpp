#include <stdio.h>
class person {
//不写public，默认就是private
private:
	char *name;
	int age;
	char *work;
public:
/*
	person ()
	{

	}
*/
	person (char *name)
	{
		this->name = name;
	}
	person (char *name ,int age)
	{
		this->name = name;
		this->age = age;
	}
	void setname(char *name)
	{
		this->name = name;
	}
	int setAge(int age)
	{
		if(age <= 0 || age > 150)
		{
			return -1;
		}
		this->age = age;
		return 0;
	}
	void printInfo(void)
	{
		printf("name = %s,age = %d,work = %s\n",name,age,work);
	}
};
int main(int argc ,char **argv)
{
	person  per("guangguang",27);
	per.printInfo();
}

