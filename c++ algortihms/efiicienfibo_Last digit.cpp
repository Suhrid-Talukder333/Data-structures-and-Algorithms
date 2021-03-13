#include<iostream>
using namespace std;


long long fibo(long long a)
{
    if(a<=1)
    {
        return a;
    }
    else
    {
           long long b[a];
           b[0]=0;
           b[1]=1;
           for(int i=2; i<=a; ++i)
            {
                b[i]=(b[i-1]%10)+(b[i-2]%10);
            }
           return b[a];
    }
}
int main()
{
    long long n;
    cin>>n;
    cout<<fibo(n)%10;
    return 0;
}
