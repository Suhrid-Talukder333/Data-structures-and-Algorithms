#include<bits/stdc++.h>
using namespace std;

int main()
{
	/*int arr[]={1,2,3,12,4,2,5,345,3,6,47,6,7,52,3,3,4,134,14,24,6,57,457,45,6,345};
	sort(arr,arr+26);
	auto k=upper_bound(arr,arr+26,35)-arr;
	if(k<26&&arr[k]>=35)
	{
		cout<<arr[k];
	}
	cout<<endl;
	auto l=lower_bound(arr,arr+26,3)-arr;
	if(l<26&&arr[l]<4)
	{
		cout<<arr[l];
	}
	cout<<endl;
	auto a = lower_bound(arr, arr+26, 23);
	auto b = upper_bound(arr, arr+26, 24);
	cout << b-a << "\n";*/
	int arr[]={1,5,6,9,0,10};
	sort(arr,arr+n,greater());
	int c;
	cin>>c;
	auto k=arr.lower_bound(x);
	if(k>5)
	{
		cout<<-1<<endl;
	}
	else
	{
		cout<<arr[k]<<endl;
	}
		
}
