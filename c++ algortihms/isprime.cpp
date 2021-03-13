#include<iostream>
using namespace std;


bool isprime(int number)
{
    if(number==1)
    {
        return false;
    }
    if(number ==2)
    {
        return true;
    }
    for(int i=2; i*i<=number; i++)
    {
        if(number % i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    if(isprime(n))
    {
        cout<<"Yes";
    }
    else
        cout<<"no";
}
