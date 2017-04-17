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



