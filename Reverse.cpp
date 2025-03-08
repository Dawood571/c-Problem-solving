#include<iostream>
using namespace std;
int main()
{
	int num,a,b,c,rem,d,e;
	num=74329;
	a=num/10000;
	rem=num%10000;
	b=rem/1000;
	rem=num%1000;
	c=rem/100;
	rem=num%100;
	d=rem/10;
	e=rem%10;
	
	cout<<e<<d<<c<<b<<a;
	return 0;
	
}
