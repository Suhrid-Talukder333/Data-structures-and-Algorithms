#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    for(int i=0; i<n; i++) cin>>arr[i];
    bool dp[n+1][m+1];
    dp[0][0]=1;
    for(int i=1; i<=m; i++) dp[0][i]=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            if(j<arr[i])
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                int need=j-arr[i];
                if(dp[i-1][need]==1||dp[i-1][j]==1)
                {
                    dp[i][j]=1;
                }
                else
                    dp[i][j]=0;
            }
        }
    }

    if(dp[n][m]==true)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}
