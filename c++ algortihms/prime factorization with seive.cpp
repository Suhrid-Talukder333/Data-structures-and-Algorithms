#include<iostream>
using namespace std;

int prime[1000005];

void seive()
{
	int max=1000004;
	for(int i=1; i<=max; i++)
	{
		prime[i]=-1;
	}
	for(int i=2; i<=max; i++)
	{
		if(prime[i]==-1)
		{
			for(int j=i; j<=max; j+=i)
			{
				prime[j]=i;
			}
		}
	}
}

int main()
{
	seive();
	int n;
	cin>>n;
	while(n!=1)
	{
		cout<<prime[n]<<" ";
		n=n/prime[n];
	}

}
