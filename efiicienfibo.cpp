#include<iostream>
using namespace std;


long long int fibo(long long int a)
{
    if(a<=1)
    {
        return a;
    }
    else
    {
           long long int b[a];
           b[0]=0;
           b[1]=1;
           for(int i=2; i<=a; ++i)
            {
                b[i]=(b[i-1])+(b[i-2]);
            }
           return b[a];
    }
}

int main()
{
    long long int n;
    cin>>n;
    cout<<fibo(n);

    return 0;
}
