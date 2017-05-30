#include<bits/stdc++.h>
using namespace std;

vector<int> g[1000001];
bool visited[1000001];
int gender[1000001];

int dfs(vector<int> g[],int i)
{
	stack<int> st;
	visited[i] = true;
	gender[i] = 1;
	st.push(i);
	while(!st.empty())
	{
		int top = st.top();
		st.pop();
		for(auto &j : g[top])
		{
			if(visited[j] && (gender[j] == gender[top]))
				return 0;
			if(!visited[j])
			{
				visited[j] = true;
				gender[j] = ( gender[top]+1 ) % 2;
				st.push(j);
			}
		}
	}
	return 1;
}

int main()
{
	int test;
	cin>>test;
	for(int t=1; t<=test; t++)
	{
		int b,in;
		cin>>b>>in;
		int a,c;
		for(int i=0;i<in;i++)
		{
			cin>>a>>c;
			g[a].push_back(c);
			g[c].push_back(a);
		}
		int flag = 0;
		for(int i=1;i<=b;i++)
			if(!visited[i])
				if(!dfs(g,i))
				{
					cout<<"Scenario #"<<t<<":\n"<<"Suspicious bugs found!\n";
					flag = 1;
					break;
				}
		if(flag==0)
			cout<<"Scenario #"<<t<<":\n"<<"No suspicious bugs found!\n";
		fill_n(visited,b+1,false);
		fill_n(gender,b+1,0);
		for(auto &j : g)
			j.clear();
	}
	return 0;
}
