#include<iostream>
#include<cmath>
using namespace std;

int func(int n)
{	
	for(int i=0;;i++)
	{
		int t = pow(2,i);
		if(n==t)
			return i;
		if(n<t)
			return i-1;
	}
}

int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		cout<<func(n)<<'\n';
		cin>>n;
	}
	return 0;
}
