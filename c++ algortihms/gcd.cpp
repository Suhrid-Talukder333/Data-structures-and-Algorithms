#include<iostream>
using namespace std;

int normalgcd(int x, int y)
{
    int g=1;
    for(int i=2; i<=max(x,y); i++)
    {
        if(x%i==0&&y%i==0)
        {
            if(i>g)
            {
                g=i;
            }
        }
    }
    return g;
}

int gcd(int a,int b)
{
    int x;
    if(b==0)
    {
        return a;
    }
    else{
        x=a%b;
        return gcd(b,x);
    }
}

int main()
{
    int i,j;
    cin>>i>>j;
    cout<<normalgcd(i,j);
    cout<<endl;
    cout<<gcd(i,j);
    return 0;
}
