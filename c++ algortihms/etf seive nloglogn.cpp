#include<iostream>
using namespace std;
int seive[1000006];

void init()
{
	for(int i=1; i<=1000005; i++)
	{
		seive[i]=i;
	}
	for(int i=2; i<=1000005; i++)
	{
		if(seive[i]==i)
		{
			for(int j=i; j<=1000005; j+=i)
			{
				seive[j]=seive[j]/i;
				seive[j]=seive[j]*(i-1);
			}
		}
	}
}

int main()
{
	init();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<seive[n]<<endl;
	}
}
