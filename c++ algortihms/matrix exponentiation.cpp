#include<iostream>
using namespace std;
#define mx 101

long long int ar[mx][mx];
long long int I[mx][mx];

void multi(long long int A[][mx],long long int B[][mx], long long int n)
{
	long long int sum[n+1][n+1];
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			sum[i][j]=0;
			for(int k=1; k<=n; k++)
			{
				sum[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			A[i][j]=sum[i][j];
		}
	}
	
}


void power(long long int A[][mx],long long int n,long long int p)
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(i==j)
			{
				I[i][j]=1;
			}
			else
				I[i][j]=0;
		}
	}
	/*for(int i=1; i<=p; i++)
	{
		multi(A,I,n);
	}*///this is naive algorithm.
	while(p)
	{
		if(p%2==0)
		{
			multi(A,A,n);
			p=p/2;
		}
		else if(p%2!=0)
		{
			multi(I,A,n);
			p--;
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			A[i][j]=I[i][j];
		}
	}	
	
}

void print(long long int A[][mx],long long int n)
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,p;
		cin>>n>>p;
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
				{
					cin>>ar[i][j];
				}
		}
		power(ar,n,p);
		print(ar,n);
	}
}
