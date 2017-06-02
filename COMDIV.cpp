#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}

int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		int t = gcd(a,b),ans=0;
		for(int i=1;i*i<=t;i++)
		{
			if(t%i==0)
				ans += 2;
			if(t%i==0 && i==t/i)
				ans--;
		}
		printf("%d\n",ans);
	}
	return 0;
}
