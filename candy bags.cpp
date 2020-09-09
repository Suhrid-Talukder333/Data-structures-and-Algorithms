#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int arr[(n*n)+1];
    for(int i=0; i<n*n; i++)
    {
        arr[i]=1;
        sum=sum+arr[i];
    }
    int med=sum/n;
    for(n--)
    {

    }
}
