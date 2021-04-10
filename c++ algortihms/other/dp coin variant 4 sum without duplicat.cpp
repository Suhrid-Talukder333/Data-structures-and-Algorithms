#include<iostream>
using namespace std;

int dp[1000005];

int check(int n,int coin[])
{
    dp[0]=1;
    for(int j=1; j<4; j++)
    {
        for(int i=n; i>=1; i--)
        {
            if(i>=coin[j]&&dp[i-coin[j]])
            {
                dp[i]+=dp[i-coin[j]];
            }
        }
    }
    return dp[n];
}

int main()
{
    int n,coin[4];
    cin>>n>>coin[1]>>coin[2]>>coin[3];
    cout<<check(n,coin);
}
