#include<bits/stdc++.h>
using namespace std;

int ar[1000000];

pair<int,int> func(int i,int window)
{
	int val = 0,pos=0;
	for(int j=i-window+1; j<=i; j++)
	if(ar[j]>val)
	{
		val = ar[j];
		pos = j;
	}
	return make_pair(val,pos);
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>ar[i];
	int window;
	cin>>window;

	pair<int,int> p = func(window-1,window);
	int val=p.first;
	int pos=p.second;
	vector<int> largest;
	largest.push_back(val);
	for(int i=window; i<n; i++)
	{
		if( (i-window+1) <= pos )
		{
			if(ar[i]>val)
			{
				val = ar[i];
				pos=i;				
			}
		}
		else
		{
			p = func(i,window);
			val = p.first;
			pos = p.second;
		}
		largest.push_back(val);
	}
	for(auto &j : largest)
		cout<<j<<' ';
	return 0;
}
