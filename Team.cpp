#include<iostream>
using namespace std;
 int main()
{
	int Win,Loss,Draw,points;
	string a;
	cout<<"Enter name of team"; cin>>a;
	cout<<"Enter wins="; cin>>Win;
	cout<<"Enter draws="; cin>>Draw;
	cout<<"Enter losses="; cin>>Loss;
	points=Win*3+Draw*1+Loss*0;
	cout<<"Points"<<points;
	
}


