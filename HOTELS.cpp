#include<iostream>
using namespace std;

int ar[1000000];

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>ar[i];
	unsigned long long int j=0,sum=0,closest=0;
	for(int i=0;i<n;i++)
	{
		while(sum>m)
		{
			sum -= ar[j++];
			if(sum>closest && sum<m)
				closest = sum;
			else if(sum==m)
			{
				closest = sum;
				break;
			}
		}
		sum += ar[i];
		if(sum==m)
		{
			closest = sum;
			break;
		}
		if(sum>closest && sum<m)
			closest = sum;
	}
	while(sum>m)
		sum -= ar[j++];
	if(sum>closest)
		closest = sum;
	cout<<closest;
	return 0;
}
