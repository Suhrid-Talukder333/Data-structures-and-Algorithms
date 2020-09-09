#include<iostream>
using namespace std;

void swp(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


int revers(int arr[], int length)
{
    for(int i=0,j=length-1; i<j; i++,j--)
    {
        swp(&arr[i],&arr[j]);
    }
}

int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int length=sizeof(arr)/sizeof(arr[1]);
    revers(arr,length);
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }
}
