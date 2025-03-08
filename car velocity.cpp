#include<iostream>
using namespace std;
int main()
{
	int a,b,c,Finalvelocity;
	 
	cout<<"Initial velocity="; cin>>a;
    cout<<"Acceleration="; cin>>b;
	cout<<"Time="; cin>>c;
	Finalvelocity=b*c+a;
	cout<<"Finalvelocity="<<Finalvelocity;
	return 0;
}
