#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a digit between (0 to 100): "; cin>>a;
	b=a/10;
	c=a%10;
	cout<<endl;
	cout<<"The number in words is: ";
	if (a>=0&&a<=100){
		if (a==0) cout<<"Zero";
		else if (a==100) cout<<"Hundred";
		else if (b==1){
			if (c==0) cout<<"Ten";
			if (c==1) cout<<"Eleven";
			if (c==2) cout<<"Twelve";
			if (c==3) cout<<"Thirteen";
			if (c==4) cout<<"Fourteen";
			if (c==5) cout<<"Fifteen";
			if (c==6) cout<<"Sixteen";
			if (c==7) cout<<"Seventeen";
			if (c==8) cout<<"Eighteen";
			if (c==9) cout<<"Nineteen";
		}
		else{
			if (b==2) cout<<"Twenty";
            if (b==3) cout<<"Thirty";
			if (b==4) cout<<"Forty";
			if (b==5) cout<<"Fifty";
			if (b==6) cout<<"Sixty";
			if (b==7) cout<<"Seventy";
			if (b==8) cout<<"Eighty";
			if (b==9) cout<<"Ninety";
			
			if (c==1) cout<<"One";
			if (c==2) cout<<"Two";
			if (c==3) cout<<"Three";
			if (c==4) cout<<"Four";
			if (c==5) cout<<"Five";
			if (c==6) cout<<"Six";
			if (c==7) cout<<"Seven";
			if (c==8) cout<<"Eight";
			if (c==9) cout<<"Nine";
	}
	}else{
		cout<<"Your given number is out of the range";
	}
	cout<<".";
	return 0;
}
