#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int ar[n];
	for(int i=0;i<n;i++)
		scanf("%d",&ar[i]);
	
	int t = n*n*n;
	vector<int> val;
	int l=0,m=0;
	vector<int> val2;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	for(int k=0;k<n;k++)
	{
		val2.push_back(ar[i]*ar[j] + ar[k]) ;
		if(ar[k]==0)
			continue;
		val.push_back(( ar[i] + ar[j] ) * ar[k]);
	}
	sort(val.begin(),val.end());
	sort(val2.begin(),val2.end());
	int count = 0;
	for(auto &j : val)
		count += (upper_bound(val2.begin(),val2.end(),j) - lower_bound(val2.begin(),val2.end(),j));
	cout<<count<<'\n';
	return 0;
}
