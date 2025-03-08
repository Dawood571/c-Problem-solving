#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,Condition1,Condition2,Sum,Multiply,Subtraction;
	cout<<"num1="; cin>>a;
	cout<<"num2="; cin>>b;		
	cout<<"num3="; cin>>c;
	cout<<"num4="; cin>>d;
	cout<<"num5="; cin>>e;
	Sum=a+b+c+d+e;
	cout<<"Sum first five="<<Sum<<endl;
	cout<<"num6="; cin>>a;
	cout<<"num7="; cin>>b;		
	cout<<"num8="; cin>>c;
	cout<<"num9="; cin>>d;
	cout<<"num10="; cin>>e;
	Multiply=a*b*c*d*e;
	cout<<"Multiply next five="<<Multiply<<endl;
	cout<<"num11="; cin>>a;
	cout<<"num12="; cin>>b;		
	cout<<"num13="; cin>>c;
	cout<<"num14="; cin>>d;
	cout<<"num15="; cin>>e;
	Subtraction=a-b-c-d-e;
	cout<<"Subtract last five="<<Subtraction<<endl;
	//Add results of sum and multiply;
	Condition1=Sum+Multiply;
	cout<<"Condition#1="<<Condition1<<endl;
	//Subtracts condition#1 from subtract;
	Condition2=Condition1-Subtraction;
	cout<<"Condition#2="<<Condition2;
	
	
	
}
