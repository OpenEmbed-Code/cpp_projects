#include <iostream>
using namespace std;
class person {
//��дpublic��Ĭ�Ͼ���private
private:
	char *name;
	int age;
	char *work;
public:

	person ()
	{
		cout<<"person()"<<endl;
	}
	person (char *name)
	{
		cout<<"person(char *)"<<endl;
		this->name = name;
	}
	
/*
	person (char *name ,int age)
	{
		cout<<"person(char *,int age)"<<endl;
		this->name = name;
		this->age = age;
	}
*/

/*
	person (char *name ,int age,char *work)
	{
		cout<<"person(char *,int age)"<<endl;
		this->name = name;
		this->age = age;
		this->work = work;
	}
*/

	person (char *name ,int age,char *work = "none")
	{
		cout<<"person(char *,int age)"<<endl;
		this->name = name;
		this->age = age;
		this->work = work;
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
		cout<<"name = "<<name<<", age = "<<age<<",work = "<<work<<endl;
	}
};
int main(int argc ,char **argv)
{
//	person  per("guangguang",27,"doctor");
	person	per("guangguang",27);

	//�����޲ι��캯��
	person  per2;

	//��ʾ����������
	/* int funtion(); */
	person per3();

//��ָ��ķ�ʽ����һ������
//�������person����޲ι��캯��
	person *per4 = new person;
	person *per5 = new person();

	person *per6 = new person[2];
	person *per7 = new person("lisi",19,"student");
	
	per.printInfo();
	per7->printInfo();

	//ɾ����̬�����Ķ���
	delete per4;
	delete per5;
	delete []per6;
	delete per7;
}

