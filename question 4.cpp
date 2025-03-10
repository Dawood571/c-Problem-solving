#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Length of side one "; cin>>a;
	cout<<"Length of side two "; cin>>b;
	cout<<"Length of side three "; cin>>c;
	
	if(a*a==b*b+c*c)
	cout<<"This is right angle triangle";
	else
	cout<<"This is not right angle triangle";
}
