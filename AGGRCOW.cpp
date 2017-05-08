#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int ar[100001],n,c;

int check(int num)
{
	int count=1,i=1,last=0;
	while(i<n)
	{
		if(ar[i]-ar[last]>=num)
		{
			last = i;
			count++;
		}
		if(count==c)
			return 1;
		i++;
	}
	return 0;
}


int find(int low,int high)
{
	if(low<high)
	{
		int mid = (low+high)/2;
		if(check(mid))
			return find(mid+1,high);
		else
			return find(low,mid);
	}
	return low-1;
}

int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d%d",&n,&c);
		for(int i=0;i<n;i++)
			scanf("%d",&ar[i]);
		sort(ar,ar+n);
		cout<<find(0,ar[n-1]-ar[0]+1)<<'\n';
	}
	return 0;
}
