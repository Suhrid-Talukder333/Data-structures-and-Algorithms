#include<iostream>
using namespace std;

int binarySrch(int arr[], int start, int value, int length);

int main()
{
    int arr[8]={1,3,4,5,6,9,10,11};
    cout<<binarySrch(arr,0,10,8);
}

int binarySrch(int arr[], int start, int value, int length)
{
    int mid=(start+length)/2;
    if(mid==start&&mid==length)
    {
        if(value!=arr[mid])
        {
            return -1;//not foundC:\Program Files (x86)\CodeBlocks\MinGW\bin
        }
    }
    if(value==arr[mid])
    {
        return mid;
    }
    else if(value<arr[mid])
    {
       return binarySrch(arr,start,value,mid-1);
    }
    else if(value>arr[mid])
    {
       return binarySrch(arr,mid+1,value,length);
    }
}