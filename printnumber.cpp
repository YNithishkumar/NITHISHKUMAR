#include<iostream>
using namespace std;
class printnumber
{
	int n1;
	char *p;
	float n2;
	double n3;
	long int n4;
	public:
		printnumber(int);
		printnumber(char *);
		printnumber(float);
		printnumber(double);
		printnumber(long int);
};
printnumber::printnumber(int a)
{
	n1=a;
	cout<<"interger"<<n1;
}
printnumber::printnumber(char * b)
{
	p=b;
	cout<<"char"<<p;
}
printnumber::printnumber(float c)
{
	c=n2;
	cout<<"float"<<n2;
}
printnumber::printnumber(double d)
{
	d=n3;
	cout<<"double"<<n3;
}
printnumber::printnumber(long int e)
{
	e=n4;
	cout<<"long integer"<<n4;
}
int main()
{
	printnumber p(50),p2("hello"),p3(123456);
	return 0;
}
