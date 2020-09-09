#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1][m+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int dp[n+1][m+1];
    for(int i=1; i<=m; i++)
    {
        dp[n][i]=arr[n][i];
    }
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=m ;j++)
        {
            dp[i][j]=arr[i][j];
            int mn=dp[i+1][j];
            if(j+1<=m)
            {
                mn=min(mn,dp[i][j+1]);
                mn=min(mn,dp[i+1][j+1]);
            }
            if(j-1>=1)
            {
                mn=min(mn,dp[i+1][j-1]);
            }
            dp[i][j]+=mn;
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

}
