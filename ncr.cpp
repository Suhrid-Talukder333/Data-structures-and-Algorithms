#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}

int c(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int n=3,r=0;
    cout<<c(n,r);
}
