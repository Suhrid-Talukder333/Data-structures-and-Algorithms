#include<iostream>
using namespace std;

int Leftshift(int arr[],int length)
{
    for(int i=0; i<length; i++ )
    {
        if(i==length-1)
        {
            arr[i]=0;
        }
        else
            arr[i]=arr[i+1];
    }
}

void Rightshift(int arr[],int length)
{
    for(int i=length-1; i>=0; i-- )
    {
        if(i==0)
        {
            arr[i]=0;
        }
        else
            arr[i]=arr[i-1];
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
    int length=sizeof(arr)/sizeof(arr[1]);
    display(arr,length);
    cout<<endl;
    //Leftshift(arr,length);
    //display(arr,length);
    //cout<<endl;
    Rightshift(arr,length);
    display(arr,length);
}
