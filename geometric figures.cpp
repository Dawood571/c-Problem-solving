#include<iostream>
using namespace std;
int main()
{
	string name;
	float l,w,A,b,h,radius,s;
	const float PI=3.14;
	cout<<"Enter the type of figures"; cin>>name;
	if(name=="square")
	{
	cout<<"Enter the sides"; cin>>s;
	A=s*s;
	cout<<"Square"<<A;
}
		if(name=="rectangle"){
		
		cout<<"Enter length="; cin>>l;
		cout<<"Enter width="; cin>>w;
		A=l*w;
		cout<<"Rectangle"<<A;}
		if(name=="circle"){
		
		cout<<"Enter the radius"; cin>>radius;
		A=PI*radius*radius;
		cout<<"circle"<<A;}
		if(name=="triangle"){
		
		cout<<"Enter the base"; cin>>b;
		cout<<"Enter the height"; cin>>h;
		A=(b*h)/2;
		cout<<"triangle"<<A;}
		
}
