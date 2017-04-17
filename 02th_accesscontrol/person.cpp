#include <stdio.h>
class person {
//不写public，默认就是private
private:
	char *name;
	int age;
	char *work;
public:
	void printInfo(void)
	{
		printf("name = %s,age = %d,work = %s\n",name,age,work);
	}
};
int main(int argc ,char **argv)
{
	person per;
	per.name = "zhangsan";
	per.age  = "19";
	per.work = "teacher"
	per.printInfo(void);
}

