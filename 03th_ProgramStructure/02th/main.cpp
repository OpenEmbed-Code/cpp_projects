#include <stdio.h>
#include "person.h"

int main(int argc ,char **argv)
{
	person per;
	per.setName("zhangsan");
	per.setAge(19);
	per.printInfo();
}

