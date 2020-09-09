#include<iostream>
using namespace std;

void checksrt(int arr[],int length)
{
    int i=0;
    while(i<length)
    {
        if(arr[i]<=arr[i+1])
        {
            i++;
            continue;
        }
        else if(arr[i]>arr[i+1])
        {
            cout<<"not sorted";
            return;
        }
    }
    cout<<"sorted";
}

int main()
{
    int arr[6]={1,2,3,10,5,6};
   int  length=6;
    checksrt(arr,length);
}
