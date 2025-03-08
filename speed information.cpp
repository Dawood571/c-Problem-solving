#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the speed"; cin>>a;
	if(a<=10)
	cout<<"Slow";
	if(a>10&&a<=50)
	cout<<"Average";
	if(a>50&&a<=150)
	cout<<"Fast";
	if(a>150&&a<=1000)
	cout<<"Ultra Fast";
}
