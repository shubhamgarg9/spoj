#include <iostream>
using namespace std;

int main() {
	int rem,test,num1,num3,num5;
	cin>>test;
	do
	{
		int num2=0,num4=0,num6=0;
		cin>>num1>>num3;
		while(num1!=0)
		{
			rem=num1%10;
			num1=num1/10;
			num2=num2*10+rem;
		}
		while(num3!=0)
		{
			rem=num3%10;
			num3=num3/10;
			num4=num4*10+rem;
		}
		num5=num2+num4;
		while(num5!=0)
		{
			rem=num5%10;
			num5=num5/10;
			num6=num6*10+rem;
		}
		cout<<num6<<endl;
		
		
		test--;
	}while(test!=0);
	
	// your code here

	return 0;
}
