#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int


ull combi(int a,int b)
{
	ull c = a-b,temp,ans=1;
	if(c>b)
	{
		temp = c;
		c = b;
		b = temp;
	}
	for(ull i=b+1,j=1; i<=a; i++,j++)
		ans = (ans*i)/j;
	return ans;
}

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		ull k,n;
		cin>>n>>k;
		cout<<combi(n-1,n-k)<<'\n';
	}
	return 0;
}
