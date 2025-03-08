#include<iostream>
using namespace std;
int main()
{
	int a,b,c,Costperpound,Costpersqfeet;
	cout<<"Size of fertilizer bad="; cin>>a;
	cout<<"Cost of bag=""$"; cin>>b;
	cout<<"Area in square feet cover by bag="; cin>>c;
	Costperpound=b/a;
	cout<<"Cost per pound=""$"<<Costperpound<<endl;
	Costpersqfeet=b/c;
	cout<<"Cost per square feet""$"<<Costpersqfeet;
	
}
