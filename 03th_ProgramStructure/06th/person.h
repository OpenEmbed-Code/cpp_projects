#include <iostream>
namespace A{
class person {
//��дpublic��Ĭ�Ͼ���private
private:
	char *name;
	int age;
	char *work;
public:
	void setName(char *name);
	int setAge(int age);
	void printInfo(void);
};
void printVersion(void);
}



