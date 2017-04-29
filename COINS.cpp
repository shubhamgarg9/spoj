#include<iostream>
#include<algorithm>
using namespace std;

long long calc(int n)
{
	if(n<12)
		return n;
	return calc(n/2) + calc(n/3) + calc(n/4);
}

int main()
{
	int n;
	while(cin>>n)
	{
		cout<<calc(n)<<'\n';
	}
	return 0;
}
