#include<iostream>
using namespace std;

int pow(int m, int k)
{
    if(k==0)
    {
        return 1;
    }
    else
    {
        return pow(m,k-1)*m;
    }
}

int main()
{
    cout<<pow(2,4);
}
