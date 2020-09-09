#include<iostream>
using namespace std;

/*int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n;
    }
    return 0;
}*///normal variable.

int fun(int n)
{
    static int x;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main()
{
    int x=5;
    cout<<fun(x);
}
