#include <stdio.h>
#include "person.h"
#include "dog.h"

/*globle namespace 全局命名空间*/

/*把 A::person放入globle namespace 以后可以用person来表示A::person*/
using A::person;

/*把 C::Dog放入globle namespace 以后可以用Dog来表示C::Dog*/
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

