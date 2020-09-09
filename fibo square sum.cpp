#include<iostream>
using namespace std;

long long fibo(long long n)
{
    if(n<=1)
    {
        return n;

    }
    else
    {
        long long arr[n];
        long long arr1[n];
        long long sum;
        arr[0]=0;
        arr[1]=1;
        sum=1;
        for(long long int i=2; i<=n; i++)
        {
           arr[i]=arr[i-1]%10+arr[i-2]%10;
           arr1[i]=(arr[i]*arr[i])%10;
           sum=(sum+arr1[i])%10;

        }
        return sum%10;
    }
}
/*long long mtonfibo(long long n,long long m,long long fm,long long fx)
{
    long long r;
    r=n-m;
    long long arr[r+1];
    long long sum;

        arr[0]=fx;
        arr[1]=fm;
        sum=fx+fm;
        for(long long int i=2; i<=r+1; i++)
        {
           arr[i]=arr[i-1]%10+arr[i-2]%10;
           sum=sum+arr[i];
        }
        sum=sum-fx;
        return sum%10;

}*/

int main()
{
    long long a,b,fa,fc,c;
    cin>>a;
    cout<<fibo(a);
    return 0;
}

