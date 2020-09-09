#include<iostream>
#include<algorithm>
using namespace std;

bool comp(int a, int b)
{
	if(a>b)return a>b;
	else
	return false;
}


int main()
{
	int arr[6]={1,4,6,8,6,4};
	sort(arr,arr+6);
	for(int i=0; i<=5; i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	sort(arr,arr+6, comp);
	for(int i=0; i<=5; i++)
	{
		cout<<i<<" ";
	}
}
