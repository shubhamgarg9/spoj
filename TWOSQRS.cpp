#include<iostream>
using namespace std;
#define ull long long

int ar[100000];
int sieve(){
	ar[0] = 2;
	ar[1] = 3;
	int k = 2;
	for(int i=4;i<=1000000;i++)
	{
		int flag = 0;
		for(int j=0; j<k && (ar[j]*ar[j]<=i); j++)
		{
			if(i%ar[j] == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
			ar[k++] = i;
	}
	return k;
}

int main()
{
	int len = sieve();
	ull test,n;
	cin>>test;
	while(test--)
	{
		cin>>n;
		int i=0,flag=0;
		while(n>1 && i<len && ar[i]*ar[i]<=n)
		{
			int c = 0;
			while(n%ar[i]==0)
			{
				if(ar[i]%4==3)
					c++;
				n = n/ar[i];
			}
			if(c%2!=0)
			{
				cout<<"No\n";
				flag = 1;
				break;
			}
			i++;
		}
		if(flag==0 && n%4==3)
			cout<<"No\n";
		else if(flag==0)
			cout<<"Yes\n";
	}
	return 0;
}
