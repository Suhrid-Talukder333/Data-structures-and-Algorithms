#include<iostream>
using namespace std;

int mx(int arr[],int length)
{
    int x=arr[0];
    for(int i=1; i<length; i++)
    {
        if(arr[i]>x)
        {
            x=arr[i];
        }
    }
    return x;
}

int mn(int arr[],int length)
{
    int x=arr[0];
    for(int i=1; i<length; i++)
    {
        if(arr[i]<x)
        {
            x=arr[i];
        }
    }
    return x;
}

int main()
{
    int arr[9]={1,3,2,4,3,1,4,6,6};
    int l=mx(arr,9);
    int x;
    int m=mn(arr,9);
    int arr1[l+1];
    for(int i=0; i<=l; i++)
    {
        arr1[i]=0;
    }
    for(int i=0; i<9; i++)
    {
        x=arr[i];
        arr1[x]++;
    }
    for(int i=m; i<=l; i++)
    {
        if(arr1[i]>1)
        {
            cout<<arr1[i]<<"for"<<i<<endl;
        }
    }
}
