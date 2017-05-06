#include<iostream>
#include<limits>
using namespace std;

int ar[101][103];

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int a,b;
		cin>>a>>b;
		for(int i=0;i<a;i++)
		{
			ar[i][0]=0;
			ar[i][b+1]=0;
		}
		for(int i=0;i<a;i++)
		for(int j=1;j<=b;j++)
			cin>>ar[i][j];
		for(int i=a-2;i>=0;i--)
		for(int j=b;j>0;j--)
			ar[i][j] += max(ar[i+1][j-1],max(ar[i+1][j],ar[i+1][j+1]));
		int m = 0;
		for(int i=1;i<=b;i++)
			m = max(m,ar[0][i]);
		cout<<m<<'\n';
	}
	return 0;
}
