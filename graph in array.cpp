#include<iostream>
using namespace std;

int graph[100][100];

int main()
{
    int n,e;
    cout<<"ENTER the number of nodes ";
    cin>>n;
    cout<<"enter edges ";
    cin>>e;
    for(int i=1; i<=e; i++)
    {
        int x,y;
        cout<<"give node of edge nodes ";
        cin>>x>>y;
        graph[x][y]=1;
        graph[y][x]=1;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
