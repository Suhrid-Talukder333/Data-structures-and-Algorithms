#include<iostream>
#include<stdio.h>
using namespace std;
int graph[100][100];


int main()
{
    freopen("text.txt","r",stdin);
    int x,y;
    scanf("%d %d",&x,&y);
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=x; j++ )
        {
            int a,b;
            scanf("%d %d",&a,&b);
            graph[a][b]=1;
        }
    }
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=x; j++ )
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    for(int i=1; i<=x; i++)
    {
        if(graph[2][i]==1)
        {
            cout<<i<<" is neighbor"<<endl;
        }
    }
}
