#include<iostream>
using namespace std;
int main()
{
	int a,b,c,Dimensions,Numofwallsyoucanpaint;
	cout<<"Square meters you can paint="; cin>>a;
	cout<<"Width of single wall="; cin>>b;
	cout<<"Height of single wall="; cin>>c;
	Dimensions=b*c;
	cout<<"Dimensions="<<Dimensions<<endl;
	Numofwallsyoucanpaint=a/Dimensions;
	cout<<"Num of walls you can paint="<<Numofwallsyoucanpaint;
}
