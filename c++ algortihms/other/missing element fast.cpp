#include<iostream>
using namespace std;

int mx(int arr[],int length)
{
    int x=arr[0];
    for(int i=0; i<length; i++)
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
    for(int i=0; i<length; i++)
    {
        if(arr[i]<x)
        {
            x=arr[i];
        }
    }

    return x;
}

void missing(int arr[],int arr1[], int arrlength,int l,int m)
{
    for(int i=m; i<=l; i++)
    {
        arr1[i]=0;
    }
    for(int j=0; j<arrlength; j++)
    {
        cout<<arr[j]<<endl;
        arr1[arr[j]]=1;
    }
    for(int i=m; i<=l; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=m; i<=l; i++)
    {
        if(arr1[i]==0)
        {
            cout<<i<<"missing ";
        }
    }
}

int main()
{
   int arr[6]={1,8,3,7,5,6};
   int l=mx(arr,6);
   int m=mn(arr,6);
   int arr1[m];
   for(int i=0; i<6; i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;

   missing(arr,arr1,6,l,m);


}

