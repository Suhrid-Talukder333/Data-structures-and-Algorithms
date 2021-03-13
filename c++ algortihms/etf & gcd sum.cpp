#include<iostream>
using namespace std;
int phi[1000006];

void init()
{
	for(int i=1; i<=1000005; i++)
	{
		phi[i]=i;
	}
	for(int i=2; i<=1000005; i++)
	{
		if(phi[i]==i)
		{
			for(int j=i; j<=1000005; j+=i)
			{
				phi[j]=phi[j]/i;
				phi[j]=phi[j]*(i-1);
			}
		}
	}
}


int getcount(int n,int d)
{
	return phi[n/d];
}


int main()
{
	init();
	int n;
	int ans=0;
	cin>>n;
	for(int i=1; i*i<=n; i++)
	{
		if(n%i==0)
		{
			 int d1,d2;
			 d1=n/i;
			 d2=d1/2;
			 ans+=d1*getcount(n,d1);
			 if(d1!=d2)
			 {
				 ans+=d2*getcount(n,d2);
			 }
		 }
	 }
	 cout<<ans;
}
