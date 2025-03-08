#include<iostream>
using namespace std;
int main()
{
	int b,d,c,e,Totaladultticketsprice,Totalchildticketsprice,Totalamountgenerated,Remainingamount;
	float Charity;
    string a;
	cout<<"Enter movie name="; cin>>a;
	cout<<"Name="<<a<<endl;
	cout<<"Adult ticket price="; cin>>b;
	cout<<"Child ticket price="; cin>>c;
	cout<<"Number of Adult tickets sold="; cin>>d;
	cout<<"Number of Child tickets sold="; cin>>e;
    	Totaladultticketsprice=b*d;
    	Totalchildticketsprice=c*e;
    cout<<"Total adult tickets price="<<Totaladultticketsprice<<endl;
    cout<<"Total child tickets price="<<Totalchildticketsprice<<endl;
        Totalamountgenerated=b*d+c*e;
    cout<<"Total amount generated"<< Totalamountgenerated<<endl;
    Charity=Totalamountgenerated*10/100;
    cout<<" Charity="<<Charity<<"%"<<endl;
     	Remainingamount=Totalamountgenerated-Charity;
	cout<<"Remaining amount"<<Remainingamount;

	
}
