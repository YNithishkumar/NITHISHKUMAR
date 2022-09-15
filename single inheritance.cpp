#include<iostream>
using namespace std;
class P
{
	int x=7;
	public:
		void getdata()
		{
			cout<<"x value is"<<x;
		}
};
class C:public P
{
	
	int y=9;
	public:
	void getdata1()
	{
		cout<<"y value is"<<y;
	}
};
int main()
{
	C c;
	c.getdata();
	c.getdata1();
	}
