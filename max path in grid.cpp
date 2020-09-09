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
	int dp[n+2][m+2];
	for(int i=1; i<=m+1; i++)
	{
		dp[n+1][i]=0;
	}
	for(int i=1; i<=n+1; i++)
	{
		dp[i][m+1]=0;
	}
	dp[n+1][m]=0;
	dp[n][m+1]=0;
	for(int i=n; i>=1; i--)
	{
		for(int j=m; j>=1; j--)
		{
			dp[i][j]=arr[i][j]+max(dp[i+1][j],dp[i][j+1]);
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