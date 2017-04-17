#include <stdio.h>
class person {
//不写public，默认就是private
private:
	char *name;
	int age;
	char *work;
public:
	void setname(char *n)
	{
		name = n;
	}
	void setAge(int a)
	{
		if(a <= 0 || a > 150)
		{
			return -1;
		}
		age = a;
		return 0;
	}
	void printInfo(void)
	{
		printf("name = %s,age = %d,work = %s\n",name,age,work);
	}
};
int main(int argc ,char **argv)
{
	person per;
	per.setname("zhangsan");
	per.setAge(19);
	per.printInfo();
}

