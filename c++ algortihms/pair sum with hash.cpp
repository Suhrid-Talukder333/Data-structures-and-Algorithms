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
    int sum=10;
    int pcount=0;
    int arr[9]={6,3,8,10,7,5,2,9,14};
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
        x=sum-arr[i];
        if(arr1[x]==1)
        {
            pcount++;
        }
        else
        {
            arr1[arr[i]]++;

        }
    }
    cout<<pcount<<endl;
}
