#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int dp[n][m];
    for(int i=0; i<n ;i++) dp[i][m-1]=1;
    for(int i=0; i<m ;i++) dp[n-1][i]=1;
    for(int i=n-2; i>=0; i--)
    {
        for(int j=m-2; j>=0; j--)
        {
            dp[i][j]=dp[i+1][j]+dp[i][j+1];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
