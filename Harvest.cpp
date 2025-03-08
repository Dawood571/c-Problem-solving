#include<iostream>
using namespace std;
int main()
{
	
	float a,b,Rp;
	int c,d,Totalpriceofvegetables,Totalpriceoffruits,Totalearning;
	cout<<"Vegetable price per kg="; cin>>a;
	cout<<"Fruit price per kg="; cin>>b;
	cout<<"Total kgs of vegetables="; cin>>c;
	cout<<"Total kgs of fruit="; cin>>d;
	//Rp=1.94coins;
	Rp=1.94;
	Totalpriceofvegetables=a*c/Rp;
	Totalpriceoffruits=b*d/Rp;
	Totalearning=Totalpriceofvegetables+Totalpriceoffruits;
	cout<<"Total earning="<<Totalearning;
	
	
}
