#include<iostream>
using namespace std;
int main()
{
	
	float h,a;
    cout<<"Enter the hours between(0-24)="; cin>>h;
    a=int(h+1)*6;
	if(h>0&&h<=3)
	cout<<"Fees=5";	
	else if(3<h&&h<=9)
	cout<<"fees="<<a;
	else if(h>9&&h<=24)
	cout<<"fees=60";
	else
	cout<<"Hours not between (0-24)";
}
