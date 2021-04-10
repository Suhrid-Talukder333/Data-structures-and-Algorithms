#include<iostream>
using namespace std;

int power(int a,int p,int m)
{
	int sum=1;
	while(p)
	{
		if(p%2==0)
		{
			a=(a*a)%m;
			p=p/2;
		}
		else
		{
			sum=(sum*a)%m;
			p--;
		}
	}
	return sum;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,m;
		cin>>a>>m;
		cout<<"a^-1 "<<power(a,m-2,m)<<" "<<endl;
	}
}
