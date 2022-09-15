#include<iostream>
using namespace std;
class employee
{
	public:
	int empno,salary;
	char empname[50];
	
	     void getdata()
     	{
       		cout<<"employee number";
	    	cin>>empno;
		    cout<<"employee salary"<<salary;
	       	cin>>salary;
		    cout<<"employee name"<<empname;
		    cin>>empname;
	    }
};
class calculate:public employee
{
	int hra,da,pf,netsalary,grosssalary;
	public:
		void getdata1()
		{
	    cout<<"hra";
		cin>>hra;
		cout<<"da";
		cin>>da;
		cout<<"pf";
		cin>>pf;
		netsalary=hra+da+salary-pf;
		cout<<"net salary"<<netsalary;
		grosssalary=hra+da+salary+pf;
		cout<<"gross salary"<<grosssalary;
		}		
};
int main()
{
	calculate d;
	d.getdata();
	d.getdata1();
	return 0;
}
