#include<iostream>
using namespace std;
 main()
{
	float b,c,d,Aggregate;
	string a;
	cout<<"Enter student name="; cin>>a;
    	cout<<"Name:"<<a<<endl;
	cout<<"Enter matriculation marks="; cin>>b;
	     cout<<"Marks:"<<b<<endl;
	cout<<"Enter intermediate marks="; cin>>c;
	     cout<<"Marks:"<<c<<endl;
	cout<<"Enter Ecat marks="; cin>>d;	 
	     cout<<"Marks:"<<d<<endl;
	Aggregate=d/400*50+c/550*40+b/1100*10;
	     cout<<"Aggregate="<<Aggregate;	      
}

