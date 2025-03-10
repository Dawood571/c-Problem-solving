#include<iostream>
using namespace std;
main()
{
	int a,Letter;
	cout<<"enter the number="; cin>>a;
	if(a<=9)
	cout<<"It is the number";
	else if(a>=10&&a<=35)
	cout<<static_cast<char>('A'+(a-10));
	
}
