#include<iostream>
#include<list>

using namespace std;
int flag=0;
class grph{
    private:
        int vertices;
        int edges,a,b;
        list<int> *adj;
    public:
        grph(int vertices,int edges);
        void edge();
        void dfs();
        void utildfs(int vertex,bool visit[],int parent);
};

grph::grph(int vertices,int edges)
{
    this->vertices=vertices;
    this->edges=edges;
    adj = new list<int>[vertices];
}
void grph::edge()
{
    int a,b;
    for(int i=0;i<edges;i++)
    {
        cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
}
void grph::utildfs(int vertex,bool visit[],int parent)
{
    visit[vertex]=true;
    list<int>::iterator it;
    for(it=adj[vertex].begin();it!=adj[vertex].end();it++)
    {
        if(visit[*it]==false)
            utildfs(*it,visit,vertex);
        else if(*it==parent)
            continue;
        else
        {
            flag=1;
            break;
        }
    }
}
void grph::dfs()
{
    bool *visit=new bool[vertices];
    for(int i=0;i<vertices;i++)
    visit[i]=false;


    for(int i=0;i<vertices;i++)
    {
        if(visit[i]==false)
        utildfs(i,visit,-1);
        if(flag==1)
            break;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    if(n=m+1)
    {
        grph g(n,m);
        g.edge();
        g.dfs();
        if(flag==0)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";
    return 0;
}

