#include<iostream>
using namespace std;

int linerSrch(int arr[],int value,int length)
{
    for(int i=0; i<length; i++)
    {
        if(arr[i]==value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    cout<<linerSrch(arr,9,length);
}
