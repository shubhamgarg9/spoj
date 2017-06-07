#include<iostream>
using namespace std;

int ar[100000][3];

int main()
{
	int n,k=1;
	cin>>n;
	while(n!=0)
	{
		for(int i=0; i<n; i++)
			cin>>ar[i][0]>>ar[i][1]>>ar[i][2];
			
		ar[0][2] += ar[0][1];
		ar[1][0] += ar[0][1];
		ar[1][1] += min(ar[1][0],min(ar[0][1],ar[0][2]));
		ar[1][2] += min(ar[0][1],min(ar[0][2],ar[1][1]));
	
		for(int i=2;i<n;i++)
		{
			ar[i][0] += min(ar[i-1][0],ar[i-1][1]);
			ar[i][1] += min(ar[i][0],min(ar[i-1][0],min(ar[i-1][1],ar[i-1][2])));
			ar[i][2] += min(ar[i][1],min(ar[i-1][1],ar[i-1][2]));
		}
		cout<<k++<<". "<<ar[n-1][1]<<'\n';
		cin>>n;
	}
	return 0;
}
