#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double n;
	int num;
	cin>>n;
	num = n;
	while(num!=0)
	{
		for(int i=0;;i++)
		{
			int t = pow(2,i);
			if(num==t)
			{	
				cout<<"1\n";
				break;
			}
			if(num<t)
			{
				t = pow(2,i-1);
				num -= t;
				cout<< 1 + 2*num <<'\n';
				break;
			}
		}
		cin>>n;
		num = n;
	}
	return 0;
}
