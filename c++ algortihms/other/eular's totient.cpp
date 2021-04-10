#include<iostream>
using namespace std;

int gcd(int x,int y)
{
    if(y==0)
        {return x;}
    else{
        int a;
        a=x%y;
        return gcd(y,a);
    }
}

int main()
{
    int a,ans=0;
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        if(gcd(i,a)==1)
        {
            ans++;
        }
    }
    cout<<ans;
}
