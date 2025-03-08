#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,rem,Num;
	Num=2345;
	a=Num/1000;
	rem=Num%1000;
	b=rem/100;
	rem=Num%100;
	c=rem/10;
	d=Num%10;
	cout<<"a+b+c+d="<<a+b+c+d;
	
}
