#include<iostream>
using namespace std;
 int main()
{
	int Population,Birth;
	
	cout<<"Enter current world population"; cin>>Population;
	cout<<"Enter monthly birth rate"; cin>>Birth;
	Birth=Birth*30*12;
	Population=Population+Birth;
	cout<<"Population"<<Population;
	
	
}

