#include<iostream>
using namespace std;
int main()
{
	float a,total_revenue,total_cost,profit_or_loss;
	int b,c,d,e,f,g,per1,per2;
	cout<<"Enter total area of land="; cin>>a;
	cout<<"Enter number of vegetables to grow="; cin>>b;
	if(b==2)
	{	cout<<"Percentage of land use for vegetable 1"<<per1<<endl;
	per2=100-per1;
	cout<<"Percentage of land use for vegetable 2"<<per2;}
	cout<<"Enter seed cost="; cin>>c;
    cout<<"Enter plantation cost="; cin>>d;
	cout<<"Enter fertilizing cost="; cin>>e;
	cout<<"Enter labor cost="; cin>>f;
	cout<<"Enter vegetable selling price="; cin>>g;
	total_cost=a*(c+d+e+f+g);
	total_revenue=a*g;
	profit_or_loss=	total_revenue-total_cost;
	cout<<"Total revenue="<<total_revenue;
	if(profit_or_loss>=0)
	cout<<"Profit"<<profit_or_loss;
	else
	cout<<"loss";
	
	
}
