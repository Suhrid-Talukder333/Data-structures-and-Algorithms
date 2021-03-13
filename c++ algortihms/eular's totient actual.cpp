#include<iostream>
using namespace std;


int phi(int x)
{
    if(x==1)
    {
        return 1;
    }
    int res=x;
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)
        {
            while(x%i==0)
            {
                x=x/i;
            }
            res=res-(res/i);
        }
    }
    if(x>1)
    {
        res=res-(res/x);
    }
    return res;
}


int main()
{
    int n;
    cin>>n;
    cout<<phi(n);
}
