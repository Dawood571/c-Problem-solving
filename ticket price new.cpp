#include<iostream>
using namespace std;
main()
{
	float b;
	string a;
	cout<<"Country Name: "; cin>>a;
	cout<<"Ticket Price: $"; cin>>b;
	cout<<"Discounted price:";
	if(a=="ireland")
	cout<<b-(b*0.1);
	else
	cout<<b-(b*0.05);

	
}

