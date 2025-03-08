#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,totalscore;
	cout<<"Enter 2-pointer score="; cin>>a;
	b=2*a;
	cout<<"Enter 3-pointer score="; cin>>c;
	d=3*c;
	cout<<"2-pointer score="<<b<<endl;
	cout<<"3-pointer score="<<d<<endl;
	totalscore=b+d;
	cout<<"Total score="<<totalscore;
}
