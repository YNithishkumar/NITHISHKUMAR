#include<iostream>
using namespace std;
class arithmatic
{
	public:
		int x=5,y=7;
		virtual void display()
		{
			cout<<"enter the value of x";
			cin>>x;
			cout<<"enter the value of y";
			cin>>y;
		}
};
class add:public arithmatic
{
	public:
		virtual void display()
		{
			cout<<"x sum of y="<<x+y;
		}
};
class sub:public arithmatic
{
	public:
		virtual void display()
		{
			cout<<"x difference y="<<x-y;
		}
};

class mul:public arithmatic
{
	public:
		virtual void display()
		{
			cout<<"x multiply y="<<x*y;
		}
};
class div:public arithmatic
{
	public:
		virtual void display()
		{
			cout<<"x divided by y="<<x/y;
		}
};
class mod:public arithmatic
{
	public:
		virtual void display()
		{
			cout<<"x modulus y="<<x%y;
		}
};
int main()
{
	arithmatic*c;
	add a;
	sub b;
	mul d;
	div e;
	mod t;
	c=&a;
	c->display();
	c=&b;
	c->display();
	c=&d;
	c->display();
	c=&e;
	c->display();
	c=&t;
	c->display();
	t.display();
	}
