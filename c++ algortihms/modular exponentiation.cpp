#include<iostream>
using namespace std;

int mbexpo(int a,int p,int n)
{
	int result=1;
	while(p)
	{
		if(p%2==0)
		{
			a=(a*a)%n;
			p=p/2;
		}
		else
		{
			result=(result*a)%n;
			p--;
		}
	}
	return result;
}

int main()
{
	int a,p,n;
	cin>>a>>p>>n;
	cout<<mbexpo(a,p,n);
}
