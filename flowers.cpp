#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,total_price;
	cout<<"Red roses price :"; cin>>a;
	cout<<"White roses price :"; cin>>b;
	cout<<"Tullips price :"; cin>>c;
	total_price=a+b+c;
	d=total_price*0.2;
	if(total_price>200){
	
	cout<<"Orignal price"<<total_price;
	cout<<"Discounted price"<<d;}
	
	else
     cout<<"Orignal price"<<total_price;
		
	
	
}
