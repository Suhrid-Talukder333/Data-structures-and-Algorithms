#include<iostream>
using namespace std;

void difference(int arr[],int arr1[],int arr2[],int arrlength,int arr1length,int arr2length)
{
    int i=0,j=0,k=0;
    while(i<arrlength&&j<arr1length)
    {
        if(arr[i]==arr1[j])
        {
            i++;
            j++;
        }
        else if(arr[i]<arr1[j])
        {
            arr2[k++]=arr[i++];
        }
        else
        {
            j++;
        }
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
    int arr2[3];
    difference(arr,arr1,arr2,5,5,2);
    display(arr2,3);
}
