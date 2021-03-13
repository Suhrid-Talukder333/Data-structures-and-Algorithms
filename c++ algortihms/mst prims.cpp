#include<bits/stdc++.h>
using namespace std;
const int INF = 1000000000;
const int MAX=100;

struct Edge {
    int node,cost;
    bool operator<(const Edge & e)const 
    {
        return cost > e.cost;
    }
};


int vertex,edges;
int cost[MAX];
bool visited[MAX];

vector<pair<int,int>> adj[MAX];


int prim(int source) 
{
    for(int i=0; i<=vertex; i++)
    {
        visited[i]=false;
        cost[i]=INF;
    }
    priority_queue<Edge>q;
    cost[source]=0;
    q.push({source,0});
    int total=0;
    while(!q.empty())
    {
        Edge current=q.top();
        q.pop();
        // if(visited[current.node])
        // {
        //     continue;
        // }
        visited[current.node]=true;
        total+=current.cost;

        for(pair<int,int> e:adj[current.node])
        {
            if(visited[e.first])
            {
                continue;
            }
            if(e.second<cost[e.first])
            {
                q.push({e.first,e.second});
                cost[e.first]=e.second;
            }
        }
    }
    return total;
}


int main()
{
    cin>>vertex>>edges;
    for(int i=0; i<edges; i++)
    {
        int a,b,c; cin>>a>>b>>c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    cout<<prim(0);
}