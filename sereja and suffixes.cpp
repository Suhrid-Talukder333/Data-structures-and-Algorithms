#include<iostream>
#include<set>
#include<cstdio>
using namespace std;

int main()
{
    set < int > s;
    int n,m,l;
    scanf("%d %d",&n, &m);
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1; i<=m; i++)
    {
        scanf("%d",&l);
        for(int j=l; j<=n; j++)
        {
           s.insert(arr[j]);
        }
        printf("%d \n",s.size());
        s.clear();
    }
}
