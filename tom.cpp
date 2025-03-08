#include<iostream>
using namespace std;
int main()
{
	int a,Norm,e,d,play_time,work_days;
	cout<<"Holidays:"; cin>>a;
	work_days=365-a;
	play_time=work_days*63+a*127;
	Norm=30000-play_time;
	d=Norm/60;
	e=Norm%60;
	if(Norm<=30000){
	
	cout<<"Tom sleeps well\n";
	cout<<d<<"Hours and "<<e<<"Minutes";}
	else
	cout<<"Tom will run \n";
	cout<<d<<"Hours and "<<e<<"Minutes";
}
