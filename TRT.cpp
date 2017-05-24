#include<iostream>
using namespace std;

int ar[2000];
int dp[2000][2000];

int ans(int i,int s,int e)
{
	if(s>e)
		return 0;
	if(s==e)
		return i*ar[s];
	if(dp[s][e]!=-1)
		return dp[s][e];
	dp[s][e]=max(i*ar[s]+ans(i+1,s+1,e),i*ar[e]+ans(i+1,s,e-1));
	return dp[s][e];
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		dp[i][j] = -1;
	for(int i=0;i<n;i++)
		cin>>ar[i];
	cout<<ans(1,0,n-1);
	return 0;
}
