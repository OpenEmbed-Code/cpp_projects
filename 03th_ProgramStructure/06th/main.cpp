#include <stdio.h>
#include "person.h"
#include "dog.h"

using namespace A;
using namespace C;

int main(int argc ,char **argv)
{

//	using A::person;
//	using C::Dog;

	/*local namespace */
	person per;
	per.setName("Lisi");
	per.setAge(18);
	per.printInfo();
	A::printVersion();
	
	Dog dog;
	dog.setName("xiao hua");
	dog.SetAge(2);
	dog.printInfo();

	C::printVersion();
	
	return 0;
}

