#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    int c;
    if(b==0)
    {
        return a;
    }
    else
    {
        c=a%b;
        return gcd(b,c);
    }
}

int lcm(int a, int b)
{
    cout<<"LCM "<<(a*b)/gcd(a,b)<<endl;
    return (a*b)/gcd(a,b);
}

int main()
{
    int a=5,b=7;
    cout<<lcm(a,b)-a-b;
}
