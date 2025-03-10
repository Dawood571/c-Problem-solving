#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the num1 :"; cin>>a;
	cout<<"Enter the num2 :"; cin>>b;
	cout<<"Enter the num3 :"; cin>>c;
	if(a<b&&b<c)
	cout<<"In ascending order ="<<a<<","<<b<<","<<c;
	if(b<a&&a<c)
	cout<<"In ascending order ="<<b<<","<<a<<","<<c;
	if(c<a&&a<b)
	cout<<"In ascending order ="<<c<<","<<a<<","<<b;
     if(a<c&&c<b)
    cout<<"In ascending order ="<<a<<","<<c<<","<<b;

	
	
}
