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
        long long sum;

        arr[0]=0;
        arr[1]=1;
        sum=1;
        for(long long int i=2; i<=n; i++)
        {
           arr[i]=arr[i-1]%10+arr[i-2]%10;
        }
        return arr[n];
    }
}
long long mtonfibo(long long n,long long m,long long fm,long long fx)
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

}

int main()
{
    long long a,b,fa,fc,c;
    cin>>a>>b;
    if(a==0 &&b==1)
    {
        cout<<1;
        return 0;
    }
    fa=fibo(a);
    c=a-1;
    fc=fibo(c);
    cout<<mtonfibo(b,a,fa,fc);
    return 0;
}

