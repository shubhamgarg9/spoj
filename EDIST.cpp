#include<bits/stdc++.h>
using namespace std;

int dp[2002][2002];

int edist(string a,string b,int m,int n)
{
	for(int i=0;i<=m;i++)
		dp[i][0] = i;

	for(int j=0;j<=n;j++)
		dp[0][j] = j;
		
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
		if(a[i-1] == b[j-1])
			dp[i][j] = dp[i-1][j-1];
		else
			dp[i][j] = 1 + min(min(dp[i-1][j],dp[i-1][j-1]),dp[i][j-1]);
	return dp[m][n];
}

int main()
{
	string a,b;
	int n;
	cin>>n;
	while(n--)
	{
		memset(dp,-1,sizeof dp);
		cin>>a>>b;
		cout<<edist(a,b,a.length(),b.length())<<'\n';
	}
	return 0;
}
