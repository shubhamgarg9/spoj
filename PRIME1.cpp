#include<iostream>
using namespace std;
#define ll long long
#define fast() 	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main()
{
	fast();
	ll m,n;
	int test;
	cin>>test;
	while(test--)
	{
		cin>>m>>n;
		if(m==1)
			m=2;
		for(int k=m;k<=n;k++)
		{
			int flag=1;
			for(int i=2;i*i<=k;i++)
			{
				if(k%i==0)
				{
					flag=2;
					break;
				}
			}
			if(flag==1)
				cout<<k<<'\n';
		}
		cout<<'\n';
	}
	return 0;
}
