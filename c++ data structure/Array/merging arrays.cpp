#include<iostream>
using namespace std;

int merg(int arr[],int arr1[], int arr2[], int ar1length, int ar0length, int ar2length)
{
    int i=0,j=0,k=0;
    while(i<ar0length&&j<ar1length)
    {
        if(arr[i]<=arr1[j])
        {
            arr2[k++]=arr[i++];
        }
        else if(arr[i]>arr1[j])
        {
            arr2[k++]=arr1[j++];
        }
    }
    for(;i<ar0length;i++)
    {
        arr2[k++]=arr[i];
    }
    for(;j<ar1length;j++)
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
    int arr1[5]={6,7,8,9,10};
    int arr2[10];
    merg(arr,arr1,arr2,5,5,10);
    display(arr2,10);
}
