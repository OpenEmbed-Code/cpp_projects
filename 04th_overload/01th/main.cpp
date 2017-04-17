

#include <iostream>
using namespace std;

int add(int a, int b)
{
	cout<<"add int + int"<<endl;
	return a+b;
}

int add(int a, int b,int c)
{
	cout<<"add int + int + int"<<endl;
	return a+b+c;
}

int add(double a, double b)
{
	cout<<"add double + double"<<endl;
	return a+b;
}

int add(int a, double b)
{
	cout<<"add double + double"<<endl;
	return (double)a+b;
}

int add(double b, int a)
{
	cout<<"add double + double"<<endl;
	return (double)a+b;
}



int main(int argc,char **argv)
{
	add(3,4);
	add(3,4,5);
	add(2.0,3.0);
	add(1,3.0);
	add(3.0,1);

}
