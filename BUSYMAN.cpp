#include<bits/stdc++.h>
using namespace std;

bool paircomp(pair<int,int> a,pair<int,int> b) {
	return a.second < b.second;
}

int main() {
	int t,n;
	pair<int,int> act[100005];

	cin>>t;

	for(int j=0;j<t;j++) {
		cin>>n;

		for(int i=0;i<n;i++)
			cin>>act[i].first>>act[i].second;

		sort(act,act+n,paircomp);

		int ans = 1;
		int end = act[0].second;

		for(int i=1;i<n;i++) {
			if(act[i].first >= end) {
				end = act[i].second;
				ans++;
			}
		}

		cout<<endl<<ans;

	}

	return 0;
}