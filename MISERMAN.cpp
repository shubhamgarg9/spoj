#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int ar[n][m];
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	{
		cin>>ar[i][j];
		if(i==0)
			continue;
		if(j==0)
			ar[i][j] += min(ar[i-1][j],ar[i-1][j+1]);
		else if(j==m-1)
			ar[i][j] += min(ar[i-1][j-1],ar[i-1][j]);
		else
			ar[i][j] += min(min(ar[i-1][j-1],ar[i-1][j]),ar[i-1][j+1]);
	}
	int low = ar[n-1][0];
	for(int i=1;i<m;i++)
		if(ar[n-1][i]<low)
			low = ar[n-1][i];
	cout<<low<<'\n';
	return 0;
}
