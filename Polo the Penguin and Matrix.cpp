#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;


int main()
{
    int n,m,d;
    cin>>n>>m>>d;
    int arr[n][m];
    vector < int >v;
    vector < int >::iterator it;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
            v.push_back(arr[i][j]);
        }
    }
    int x=arr[0][0]%d;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]%d==x)
            {
                continue;
            }
            else
            {
                cout<<-1;
                return 0;
            }
        }
    }
    sort(v.begin(),v.end());
    int medium=v[v.size()/2];
    //cout<<medium<<endl;
    int ans=0;
    for(it=v.begin(); it!=v.end(); it++)
    {
        //cout<<*it<<endl;
        ans=ans+abs(*it-medium)/d;
    }
    cout<<ans;
}
