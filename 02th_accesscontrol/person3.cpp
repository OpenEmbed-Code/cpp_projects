#include <stdio.h>
class person {
//��дpublic��Ĭ�Ͼ���private
private:
	char *name;
	int age;
	char *work;
public:
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
	person per;
	per.setname("zhangsan");
	per.setAge(19);
	per.printInfo();
}

