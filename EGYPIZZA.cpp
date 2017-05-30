#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=0,b=0,c=0;
	cin>>n;
	string t;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		if(t[0]=='1' && t[2]=='4')
			c++;
		else if(t[0]=='1' && t[2]=='2')
			b++;
		else if(t[0]=='3' && t[2]=='4')
			a++;
	}
	int ans = 0;
	ans += b/2;
	b = b%2;
	ans += a;
	c -= a;
	if(b==1)
	{
		ans += 1;
		c -= 2;
	}
	if(c>0)
	{
		ans += c/4;
		int k = c/4;
		c = c - (4*k);
	}
	if(c>0)
		ans++;
	cout<<ans+1;
	return 0;
}
