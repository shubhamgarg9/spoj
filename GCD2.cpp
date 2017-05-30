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
	cin>>test;
	while(test--)
	{
		int b;
		string str;
		cin>>b>>str;
		if(b==0)
		{
			cout<<str<<'\n';
			continue;
		}
		int a[str.size()];
		for(int i=0;i<str.size();i++)
			a[i] = str[i] - '0';
		int t = 0,j=0;
		while(j<str.size())
		{
			while(t<b && j<str.size())
				t = t*10 + a[j++];
			t = t%b;
		}
		cout<<gcd(t,b)<<'\n';
	}
	return 0;
}
