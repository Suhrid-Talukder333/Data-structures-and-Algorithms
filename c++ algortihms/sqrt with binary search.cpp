#include<iostream>
using namespace std;

int main()
{
	double n;
	cin>>n;
	double a=0.00;
	double b=n;
	while(b-a>0.000000001)
	{
		double mid=(a+b)/2;
		if(mid*mid>n) cout<<mid<<endl,b=mid;
		else if(mid*mid<=n) cout<<mid<<endl,a=mid;
	}
	
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	
	for(int i=1; i<=100; i++)
	{
		double a=0.0000;
		double b=n;
		double mid=(a+b)/2;
		if(mid*mid>n) cout<<mid<<endl,b=mid;
		else if(mid*mid<=n) cout<<mid<<endl,a=mid;
	}
}
