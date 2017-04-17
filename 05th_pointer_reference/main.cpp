#include <iostream>
using namespace std;
int add_one(int a)
{
	a = a + 1;
	return a;
}

int add_one(int *a)
{
	*a = *a + 1;
	return *a;
}
//避免指针的使用，但是还是能操作这块内存
/*
int add_one_ref(int &a)
{
	a = a +1;
	return a;
}
*/
int add_one_ref(int &b)
{
	b = b +1;
	return b;
}


int main(int argc,char **argv)
{
	int a = 99;
	int &c = a;
	cout<<add_one(a)<<endl;
	cout<<"a = "<<a<<endl;
	
	cout<<add_one(&a)<<endl;
	cout<<"a = "<<a<<endl;

	cout<<add_one_ref(a)<<endl;
	cout<<"a = "<<a<<endl;

	c++;
	cout<<"a = "<<a<<endl;
	cout<<"c = "<<c<<endl;
	
	return 0;
}
