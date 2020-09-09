#include<iostream>
using namespace std;

void insert(int arr[],int index, int value,int &length)
{
    if(index<length)
    {
        for(int i=length; i>index; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[index]=value;
        length++;
    }
}

void display(int arr[],int n)
{
    for(int i=0; i<n; ++i)
    {
        cout<<arr[i]<<" ";
    }
}

void add(int arr[], int value,int &length)
{
    arr[length]=value;
    length++;
}

void delt(int arr[], int index, int &length)
{
    if(index<length-1)
    {
        for(int i=index; i<length-1; i++)
        {
            arr[i]=arr[i+1];
        }
        length--;
    }
}

int main()
{
    int arr[8];
    arr[0]=1;
    arr[1]=7;
    arr[2]=6;
    arr[3]=5;
    arr[4]=4;
    int length=5;
    display(arr,length);
    add(arr,9,length);
    cout<<endl;
    display(arr,length);
    insert(arr,3,8,length);
    cout<<endl;
    display(arr,length);
    delt(arr,3,length);
    cout<<endl;
    display(arr,length);
}
