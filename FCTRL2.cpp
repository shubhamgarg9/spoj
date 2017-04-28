#include<iostream>
using namespace std;
int ar[1000] = {0};
int main()
{
	ios_base::sync_with_stdio(0);
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		int pos = 1,cry = 0,temp = 0;
		ar[0] = 1;
		for(int i=2;i<=n;i++)
		{
			for(int j=0;j<pos;j++)
			{
				temp = ar[j]*i + cry;
				ar[j] = temp%10;
				cry = temp/10;
			}
			while(cry!=0)
			{
				ar[pos++] = cry%10;
				cry /= 10;
			}
		}
		for(int i=pos-1;i>=0;i--)
			cout<<ar[i];
		cout<<'\n';
	}
	return 0;
}
