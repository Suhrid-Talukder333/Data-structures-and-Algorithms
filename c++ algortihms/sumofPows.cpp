#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sumOfPows(ll a,ll k)//Return a^1+a^1+a^2+.....a^k	in O(k)
{
    if(k==0)
    {
        return 1;
    }
    if(k%2==1)
    {
        return a*(1+sumOfPows(a,k-1));
    }
    ll half=sumOfPows(a,k/2);
    return half*(1+half-sumOfPows(a,k/2-1));
}

int main()
{
    cout<<sumOfPows(2,1);
}