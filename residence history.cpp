#include<iostream>
using namespace std;
int main()
{
	int a,b,Avryearsinsamehouse;
	cout<<"Enter person's age="; cin>>a;
	cout<<"Age="<<a<<endl;
	cout<<"Enter number of moves=";cin>>b;
	cout<<"Moves="<<b<<endl;
	Avryearsinsamehouse=a/++b;
	cout<<"Avr years in same house"<<Avryearsinsamehouse;
}
