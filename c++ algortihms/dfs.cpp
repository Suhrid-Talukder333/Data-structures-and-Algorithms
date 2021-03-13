#include<iostream>
#include<stdio.h>
using namespace std;

int color[100];
#define WHITE 0
#define BLACK 3
#define GREEN 2
int x,y;
int graph[100][100];


void dfsVisit(int k)
{
    color[k]=GREEN;
    for(int i=1; i<=x; i++)
    {
        if(graph[x][i]==1)
        {
            dfsVisit(i);
        }
    }
    color[k]=BLACK;
}




void dfs()
{
    for(int i=1; i<=x; i++)
    {
        if(color[i]==WHITE)
        {
            dfsVisit(i);
        }
    }
}


int main()
{
    freopen("text.txt","r",stdin);
    scanf("%d %d",&x,&y);
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=x; j++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            graph[a][b]=1;
        }
    }
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=x; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    dfs();

    for(int i=1; i<=x; i++)
    {
        cout<<i<<" "<<color[i]<<endl;
    }
}
