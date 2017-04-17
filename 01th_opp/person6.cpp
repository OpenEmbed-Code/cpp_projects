#include <stdio.h>
class person{
public:
	char *name;
	int age;
	char *work;
	void printInfo(void)
	{
		printf("name = %s,age = %d,work = %s\n",name,age,work);
	}
};
int main(int argc,char **argv)
{

	struct person  persons[] = {
		{"zhangsan",10,"teacher"},
		{"lisi",19,"doctor"},
	};
	int i;
	for(i = 0; i < 2; i++)
		{
			persons[i].printInfo();
		}
	return 0;
}
