#include<iostream>
using namespace std;

void display(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void leftrotat(int arr[],int length)
{
    int a;
    a=arr[0];
    for(int i=0; i<length; i++)
    {
        if(i==length-1)
        {
            arr[i]=a;
        }
        else
            arr[i]=arr[i+1];
    }
}

void rightrotat(int arr[], int length)
{
    int a;
    a=arr[length-1];
    for(int i=length-1; i>=0; i--)
    {
        if(i==0)
        {
            arr[i]=a;
        }
        else
            arr[i]=arr[i-1];
    }
}


int main()
{
    int arr[5]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[1]);
    display(arr,length);
    cout<<endl;
   leftrotat(arr,length);
   display(arr,length);
   cout<<endl;
   rightrotat(arr,length);
    display(arr,length);
}
