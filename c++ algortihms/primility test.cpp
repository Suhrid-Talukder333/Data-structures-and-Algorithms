#include<iostream>
using namespace std;

bool isPrie(int n)
{
	if(n==1) 
	{
		return false;
	}
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
	
}



int main()
{
	int n;
	cin>>n;
	if(isPrie(n))
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
