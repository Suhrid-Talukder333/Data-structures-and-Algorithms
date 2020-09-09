#include<iostream>
using namespace std;

long long sum_fibo(long long n)
{
    if(n<=1)
    {
        return n;

    }
    else
    {
        long long arr[n];
        long long sum;

        arr[0]=0;
        arr[1]=1;
        sum=1;
        for(long long int i=2; i<=n; i++)
        {
           arr[i]=arr[i-1]%10+arr[i-2]%10;
           sum=(sum+arr[i])%10;
        }
        return sum;
    }
}

int main()
{
    long long number;
    cin>>number;
    cout<<sum_fibo(number);
    return 0;
}

