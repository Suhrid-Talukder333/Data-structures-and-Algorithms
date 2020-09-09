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
    if(k%2==0)
    {
        return pow(m*m,k/2);
    }
    else
    {
        return m*pow(m*m,(k-1)/2);
    }
    }
}

int  main()
{
    cout<<pow(2,4);
}
