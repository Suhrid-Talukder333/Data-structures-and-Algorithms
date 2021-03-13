#include<iostream>
using namespace std;

void unin(int arr[],int arr1[],int arr2[],int arrlength, int arr1length,int arr2length)
{
    int i=0,j=0,k=0;
    while(i<arrlength&&j<arr1length)
    {
        if(arr[i]==arr1[j])
        {
            arr2[k++]=arr[i++];
            j++;
        }
        else if(arr[i]<arr1[j])
        {
            arr2[k++]=arr[i++];
        }
        else
        {
            arr2[k++]=arr1[j++];
        }
    }
    for(;i<arrlength; i++)
    {
        arr2[k++]=arr[i];
    }
    for(;j<arr1length;j++)
    {
        arr2[k++]=arr1[j];
    }
}

void display(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int arr1[5]={4,5,6,7,8};
    int arr2[8];
    unin(arr,arr1,arr2,5,5,8);
    display(arr2,8);
}
