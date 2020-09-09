#include<iostream>
using namespace std;
typedef long long int ll;

ll dp[1000005];

int num(ll n,ll coin[])
{
    dp[0]=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<4; j++)
        {
            if(i>=coin[j])
            {
                dp[i]+=dp[i-coin[j]];
            }
        }
    }
    return dp[n];
}



int main()
{
    ll n,coin[4];
    cin>>n>>coin[1]>>coin[2]>>coin[3];
    cout<<num(n,coin);
}
