#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    int dp[n+1][n+1];
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            dp[i][j]=0;
        }
    }
    for(int i=0; i<=n; i++) dp[0][i]=1;
    for(int i=1; i<=n; i++) dp[1][i]=1;
    for(int i=2; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            if(arr[j-i+1]==arr[j]&&dp[i-2][j-1]==1)
            {
                dp[i][j]=1;
            }
            else
                dp[i][j]=0;
        }
    }
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
