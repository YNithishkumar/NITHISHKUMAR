#include<iostream>
using namespace std;
class student
{
	public:
	int rollno;
		void getdata()
		
		{
			cout<<"enter the roll number";
			cin>>rollno;
			
		}
};
class test:public student
{
	public:
	int t1,t2;
		void getdata1()
		{
			cout<<"enter mark1";
			cin>>t1;
			cout<<"enter mark2";
			cin>>t2;
		}
};
class total:public test
{
	public:
	int test;
	void getdata2()
		{
		test=t1+t2;
		cout<<"total marks"<<test;
		}
};
int main()
{
	total t;
	t.getdata();
    t.getdata1();
	t.getdata2();	
}
