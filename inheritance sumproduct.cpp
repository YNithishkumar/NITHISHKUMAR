#include<iostream>
using namespace std;
class sum
{
	int a,b,c;
	public:
		void getdata()
		{
			cout<<"value of a and b is";
			cin>>a>>b;
			c=a+b;
			cout<<"sum of a and b is"<<c;
		}
};
class product:public sum
{
	int a,b,c;
	public:
		void getdata1()
		{
			cout<<"product of and b is";
			cin>>a>>b;
			c=a*b;
			cout<<"product of a and b is"<<c;
		}
};
int main()
{
	product d;
	d.getdata();
	d.getdata1();
	}

