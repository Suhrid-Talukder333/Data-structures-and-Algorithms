#include<bits/stdc++.h>
using namespace std;
#define MAX 500


int multiply(int arr[],int arrSize,int x)
{
    int carry=0;

    for(int i=0; i<arrSize; i++)
    {
        int product=arr[i]*x+carry;
        arr[i]=product%10;
        carry=product/10;
    }
    while(carry)
    {
        arr[arrSize]=carry%10;
        carry=carry/10;
        arrSize++;
    }
    return arrSize;
}


void factorial(int n)
{
    int arr[MAX];
    arr[0]=1;
    int arrSize=1;

    for(int x=2; x<=n; x++)
    {
        arrSize=multiply(arr,arrSize,x);
    }

    for(int i=arrSize-1; i>=0; i--)
    {
        cout<<arr[i];
    }
}


int main()
{
    factorial(100);
}