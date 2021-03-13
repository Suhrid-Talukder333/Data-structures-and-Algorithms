#include<iostream>
using namespace std;

void display(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int insrt(int arr[], int length,int value)
{
    for(int i=length-1; i>=0; i--)
    {
        if(arr[i]>value)
        {
            arr[i+1]=arr[i];
        }
        else if(arr[i]<=value)
        {
            arr[i+1]=value;
            return 0;
        }
    }
}

int main()
{
    int arr[5]={1,2,4,5};
    insrt(arr,4,3);
    display(arr,5);

}
