#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n-10<0)
    {
        cout<<0;
    }
    else if(n==10)
    {
        cout<<0;
    }
    else if(n-10<10)
    {
        cout<<4;
    }
    else if(n-10==10)
    {
        cout<<15;
    }
   else if(n-10==11)
    {
        cout<<4;
    }
    else if(n-10>11)
    {
        cout<<0;
    }
}
