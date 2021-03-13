#include<iostream>
using namespace std;

int mxnmn(int arr[],int length,int *mx,int *mn)
{
    for(int i=0; i<length; i++)
    {
        if(arr[i]<*mn)
        {
            *mn=arr[i];
        }
        else if(arr[i]>*mx)
        {
            *mx=arr[i];
        }
    }
}

int main()
{
    int arr[9]={1,2,3,56,7,4,7,9,0};
    int mn=arr[0],mx=arr[0];
    mxnmn(arr,9,&mx,&mn);
    cout<<mx<<endl;
    cout<<mn;
}
