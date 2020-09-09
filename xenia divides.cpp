#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;


int main()
{
    vector < pair <int, < pair < int, int > > > >v;
    vector < pair <int, < pair < int, int > > > > :: iterator it;
    int n,a,b;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    for(int i=0 ; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]%arr[i]==0)
            {
              a=i;
              b=j;

            }
        }
    }
}
