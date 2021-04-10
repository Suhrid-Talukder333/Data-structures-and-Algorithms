#include<iostream>
using namespace std;

int fun(int n);

int fun1(int x);

int main()
{
    fun(10);
}

int fun1(int x)
{
    if(x>1)
    {
        cout<<x;
        fun(x/2);
    }
}

int fun(int n)
{
    if(n>0)
    {
        cout<<n;
        fun1(n-1);
    }
}
