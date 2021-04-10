#include<iostream>
using namespace std;

int main()
{
	int x=4;
	cout<<(x&(-x))<<endl;
	cout<<(x&((x-1)))<<endl;
	cout<<(x|((x-1)))<<endl;
	x=3;
	cout<<__builtin_popcount(x)<<endl;
	cout<<__builtin_parity(x)<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	int y=0;
	y=y|1<<1;
	y=y|1<<3;
	y=y|1<<4;
	y=y|1<<5;
	for(int i=0; i<32; i++)
	{
		if(y&(1<<i)) cout<<i<<" ";
	}
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	int ar[4]={1,2,3,4};
	int n=3;
	for(int i=0; i<1<<n; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(i&1<<j)
			{
				cout<<ar[j]<<" ";
			}
		}
		cout<<endl;
	}
}
