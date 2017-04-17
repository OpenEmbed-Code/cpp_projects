#include <stdio.h>
#include "person.h"
#include "dog.h"

int main(int argc ,char **argv)
{
	A::person per;
	per.setName("Lisi");
	per.setAge(18);
	per.printInfo();
	A::printVersion();
	C::Dog dog;
	dog.setName("xiao hua");
	dog.SetAge(2);
	dog.printInfo();
	return 0;
}

