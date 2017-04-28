#include<iostream>
using namespace std;
int main()
{
	long long a;
	int test;
	cin>>test;
	while(test--)
	{
		cin>>a;
		int ans = 0,fi = 5;
		while(a/fi!=0)
		{
			ans += a/fi;
			fi *= 5;
		}
		cout<<ans<<'\n';
	}
	return 0;
}
