#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

long gcd(long a,long b){
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
	long t,a,b,k;
	scanf("%ld",&t);
	for(int i=1;i<=t;i++)
	{
		long ans = 0;
		scanf("%ld%ld",&a,&b);
		k=gcd(a,b);
		float q=sqrt(k);
		for(long j=1;j<=q;j++)
		{
			if(k%j==0){
				ans+=2;
				if (j==k/j)
					ans--;
			}
		}
		printf("%ld\n",ans);
	}
	return 0;
}

