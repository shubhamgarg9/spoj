#include<iostream>
#include<vector>
using namespace std;

bool visited[10001];
int ans = 0;

int dfs(vector<int> tree[],int i)
{
	int a=0,b=0;
	for(auto &j:tree[i])
	{
		int len = dfs(tree,j);
		if(len>a)
		{
			b = a;
			a = len;
		}
		else if(len>b)
			b = len;
	}
	ans = max(ans,a+b+1);
	return a+1;
}

int main()
{
	int n,a,b;
	cin>>n;
	vector<int> tree[n+1];
	for(int i=0;i<n-1;i++)
	{
		cin>>a>>b;
		tree[a].push_back(b);
	}
	dfs(tree,1);
	cout<<ans-1;
	return 0;
}
