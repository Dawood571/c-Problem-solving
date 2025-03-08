#include<iostream>
using namespace std;
int main()
{
	int a,b,FPS,minutes;
	cout<<"Number of minutes="; cin>>a;
	cout<<"Frames per second"; cin>>b;
	minutes=a*60;
    FPS=minutes*b;
    cout<<"FPS="<<FPS;
	return 0;
	
}
