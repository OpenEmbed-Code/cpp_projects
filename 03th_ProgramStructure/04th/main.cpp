#include <stdio.h>
#include "person.h"
#include "dog.h"

/*globle namespace ȫ�������ռ�*/

/*�� A::person����globle namespace �Ժ������person����ʾA::person*/
using A::person;

/*�� C::Dog����globle namespace �Ժ������Dog����ʾC::Dog*/
using C::Dog;


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

