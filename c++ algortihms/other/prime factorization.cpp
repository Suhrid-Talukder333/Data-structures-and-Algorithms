#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=2; i*i<=n; i++)//same as seive cause divisors will lai on th before n*n;
	{
		if(n%i==0)
		{
			int c=0;
			while(n%i==0)
			{
				n=n/i;
				c++;
			}
			cout<<i<<"^"<<c<<endl;
		}
	}
	if(n>1)
	{
		cout<<n<<"^"<<1<<endl;//PRIME NUMBER;
	}
}
