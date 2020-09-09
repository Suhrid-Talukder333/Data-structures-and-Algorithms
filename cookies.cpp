#include<iostream>
using namespace std;

int main()
{
    int n,odds=0,evens=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            evens++;
        }
        else
            odds++;
    }
    if(odds%2==0)
    {
        cout<<evens;
    }
    else if(odds%2!=0)
    {
        cout<<odds;
    }
}
