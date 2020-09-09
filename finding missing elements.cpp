#include<iostream>
using namespace std;

int mx(int arr[], int length)
{
    int a=arr[0];
    for(int i=0; i<length; i++)
    {
        if(arr[i]>a)
        {
            a=arr[i];
        }
    }
    return a;
}

int mn(int arr[], int length)
{
    int a=arr[0];
    for(int i=0; i<length; i++)
    {
        if(arr[i]<a)
        {
            a=arr[i];
        }
    }
    return a;
}

int main()
{
    int arr[5]={1,3,5,7};
    int l=mn(arr,5);
    int m=mx(arr,5);
    int arr1[m];
    int p;
    for(int i=0; i<m; i++)
    {
        arr1[i]=0;
    }
    for(int i=0; i<5; i++)
    {
        p=arr[i];
        arr1[p]=1;
    }
    for(int i=l; i<=m; i++)
    {
        if(arr1[i]==0)
        {
            cout<<i<<"missing ";
        }
    }
}
