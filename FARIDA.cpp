#include<iostream>
using namespace std;

long long int ar[10001];
long long int ans[10001];


int main()
{
	int test;
	cin>>test;
	for(int z=1; z<=test; z++)
	{
		int n;
		cin>>n;
		if(n==0)
		{
			cout<<"Case "<<z<<": 0\n";
			continue;
		}
		for(int i=0;i<n;i++)
			cin>>ar[i];

		ans[0] = ar[0];
		ans[1] = max(ar[0],ar[1]);

		for(int i=2;i<n;i++)
			ans[i] = max(ans[i-1],ar[i]+ans[i-2]);
		cout<<"Case "<<z<<": "<<ans[n-1]<<'\n';
	}
	return 0;
}
