#include<iostream>
using namespace std;
int main()
{
	int a,b,Chancesofbeingimposter;
	cout<<"Imposter count="; cin>>a;
	cout<<"Player count="; cin>>b;
	Chancesofbeingimposter=100*a/b;
	cout<<"Chances of being imposter="<<Chancesofbeingimposter<<"%";
	return 0;
}
