#include<iostream>
using namespace std;

long long euclicgcd(long long a, long long b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        long long x;
        x=a%b;
        return euclicgcd(b,x);
    }
}

int main()
{
    long long i,j;
    cin>>i>>j;
    cout<<(i*j)/euclicgcd(i,j);
    return 0;
}
