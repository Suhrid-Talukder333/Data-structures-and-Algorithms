#include<iostream>
#include<stdio.h>
using namespace std;

int graph[100][100];

int main()
{
    freopen("text.txt", "r" ,stdin);

    int n,e;
    scanf("%d %d",&n,&e);
    for(int i=1; i<=e; i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        graph[x][y]=1;
        graph[y][x]=1;
    }
    for(int i=1 ; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<graph[i][j]<<" ";
        }
            cout<<endl;
    }
}
