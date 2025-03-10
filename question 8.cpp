#include<iostream>
using namespace std;
int main()
{
	int a,b,s,m,D;
	cout<<"Enter first number="; cin>>a;
	cout<<"Enter Second number="; cin>>b;
	s=a+b;
	m=a*b;
	D=a*b;
	if(s)
	cout<<"Addition: a+b ="<<s<<endl;
	if(m>=0)
		cout<<"Multiply: a*b ="<<m<<endl;
		if(D)
		cout<<"Division: a/b ="<<D<<endl;
		else if(D==0)
		cout<<"Infinity";
}
