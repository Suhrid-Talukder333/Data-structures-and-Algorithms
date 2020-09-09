#include<iostream>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int dp[m+1]={0};
    dp[0]=1;
    for(int i=0; i<n; i++)
    {
        for(int j=m; j>=arr[i]; j--)
        {
            if(dp[j]||dp[j-arr[i]]==0)
            {
                continue;
            }
            else
                dp[j]=1;
        }
    }
    for(int i=0; i<=m; i++)
    {
        cout<<dp[i]<<" ";
    }
}
