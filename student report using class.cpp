#include<iostream>
using namespace std;
class studentreport
{
	int y,m1,m2,m3,total,avg;
	char x[50];
	public:
		void getdata();
		void calculate();
		void display();
};
void studentreport::getdata()
{
	cout<<"enter name:";
	cin>>x;
	cout<<"enter regno:";
	cin>>y;
	cout<<"enter mark1:";
	cin>>m1;
	cout<<"enter mark2:";
	cin>>m2;
	cout<<"enter mark3:";
	cin>>m3;
}
void studentreport::calculate() 
{
	total=m1+m2+m3;
	avg=total/3;
	
}
void studentreport::display()
{
	cout<<"\n total marks="<<total;
	cout<<"\n average="<<avg;
	cout<<"\n name:"<<x;
	cout<<"\n regno:"<<y;
	cout<<"\n mark1:"<<m1;
	cout<<"\n mark2:"<<m2;
	cout<<"\n mark3:"<<m3;
}
int main()
{
 studentreport a;
a.getdata();
a.calculate();
a.display();
}

