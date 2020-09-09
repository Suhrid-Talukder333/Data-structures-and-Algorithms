#include<iostream>
using namespace std;
int dp[1000005];

int num(int n,int coin[])
{
    dp[0]=1;
    for(int i=1; i<4; i++)
    {
        for(int j=n; j>=1; j--)
        {
            if(j>=coin[i]&&dp[j-coin[i]])
            {

                dp[j]+=dp[j-coin[i]];
            }

        }
    }
    return dp[n];
}




int main()
{
    int n,coin[4];
    cin>>n>>coin[1]>>coin[2]>>coin[3];
    cout<<num(n,coin);
}
