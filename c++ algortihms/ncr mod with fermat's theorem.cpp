#include<iostream>
using namespace std;
typedef long long int ll;
#define m 100000007
ll fact[100000007];

ll power(ll a,ll p)
{
	ll res=1;
	while(p)
	{
		if(p%2==0)
		{
			a=(a*a)%m;
			p=p/2;
		}
		else
		{
			res=(res*a)%m;
			p--;
		}
	}
	return res;
}


ll ncr(ll n, ll r)
{
	if(r>n) return 0;
	ll sum;
	sum=(fact[n])%m;
	sum=(sum*power(fact[r],m-2))%m;
	sum=(sum*power(fact[n-r],m-2))%m;
	return sum%m;
}



int main()
{
	fact[0]=fact[1]=1;
	fact[2]=2;
	for(int i=3; i<=100000; i++)
	{
		fact[i]=(fact[i-1]*i)%m;
	}
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,r;
		cin>>n>>r;
		cout<<ncr(n,r)<<endl;
	}
}
