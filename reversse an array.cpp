#include<iostream>
using namespace std;

void revers(int arr[],int length)
{
    int a[length];
    for(int i=length-1,j=0; i>=0; i--,j++)
    {
        a[j]=arr[i];
    }
    for(int i=0; i<length; i++)
    {
        arr[i]=a[i];
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int length=sizeof(arr)/sizeof(arr[1]);
    revers(arr,length);

}
