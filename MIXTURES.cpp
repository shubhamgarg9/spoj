#include<iostream>
#include<climits>
using namespace std;

typedef pair<int,int> P;

int main()
{
	int n;
	while(cin>>n)
	{
		int ar[n];
		for(int i=0;i<n;i++)
			cin>>ar[i];
		
		P dp[n][n];
		
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			dp[i][j].first = INT_MAX;
		
		for(int i=0;i<n;i++)
			dp[i][i] = P(0,ar[i]);
			
		for(int l=2;l<=n;l++)
		for(int i=0;i<n-l+1;i++)
		{
			int j=i+l-1;
			for(int k=i;k<j;k++)
			{
				int temp = dp[i][k].first + dp[k+1][j].first + dp[i][k].second * dp[k+1][j].second;
				if(temp < dp[i][j].first)
				{
					dp[i][j].first = temp;
					dp[i][j].second = (dp[i][k].second + dp[k+1][j].second) % 100;
				}
			}
		}
		cout<<dp[0][n-1].first <<'\n';
	}
	return 0;
}
