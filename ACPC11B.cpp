#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

typedef pair<int,int> P;

bool comp(pair<int,int> a,pair<int,int> b){
	return a.first<b.first;
}

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int a,b;
		cin>>a;
		vector<P> v;
		for(int i=0;i<a;i++)
		{
			cin>>b;
			v.push_back(P(b,1));
		}
		cin>>b;
		for(int i=0;i<b;i++)
		{
			cin>>a;
			v.push_back(P(a,2));
		}
		sort(v.begin(),v.end(),comp);
		int ans = INT_MAX;
		for(vector<P>::iterator j=v.begin(); j!=v.end()-1; j++)
		{
			if(j->second != (j+1)->second)
			{
				if(ans > ((j+1)->first - j->first))
					ans = (j+1)->first - j->first;
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}
