#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int visits = 0;

bool bfs(vector<int> graph[],int n)
{
	bool visited[n+1];
	for(int i=1;i<=n;i++)
		visited[i] = false;
	
	queue<int> q;
	q.push(1);
	visited[1] = true;
	while(!q.empty())
	{
		visits++;
		int node = q.front();
		q.pop();
		for(auto &i : graph[node])
		{
			if(visited[i])
				return false;
			else
			{
				q.push(i);
				visited[i] = true;				
			}
		}
	}
	if(visits==n)
		return true;
	else
		return false;
}

int main()
{
	int n,e,a,b;
	cin>>n>>e;
	vector<int> graph[n+1];
	for(int i=0;i<e;i++)
	{
		cin>>a>>b;
		graph[a].push_back(b);
	}
	if(bfs(graph,n))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
