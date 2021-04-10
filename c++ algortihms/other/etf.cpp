#include<iostream>
using namespace std;

int phi(int n)
{
	int result=n;
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0)
		{
			result=result/i;
			result=result*(i-1);
			while(n%i==0)
			{
				n=n/i;
			}
		}
	}
	if(n>1)
	{
		result= result/n;
		result=result*(n-1);
	}
	return result;
}


int main()
{
	int n;
	cin>>n;
	cout<<phi(n)<<endl;
}
