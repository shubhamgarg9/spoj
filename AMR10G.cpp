#include<bits/stdc++.h>
using namespace std;

int ar[20000];

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int k,n;
		cin>>n>>k;
		for(int i=0;i<n;i++)
			cin>>ar[i];
		sort(ar,ar+n);
		int ans=INT_MAX;
		for(int i=0;;i++)
		{
			if(ans>ar[i+k-1]-ar[i])
				ans = ar[i+k-1]-ar[i];
			if(i+k==n)
				break;
		}
		cout<<ans<<'\n';
	}
	return 0;
}
