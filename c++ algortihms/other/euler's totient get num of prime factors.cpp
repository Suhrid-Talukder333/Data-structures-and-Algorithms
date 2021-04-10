#include<iostream>
#include<cmath>
using namespace std;

int numofcoprimes(int x)
{
    int an=1;
    int ans[x];
    for(int i=0; i<x; i++)
    {
        ans[i]=0;
    }
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        {
            ans[i]=ans[i]+1;
            x=x/i;
        }
    }

    for(int i=0; i<x; i++)
    {
        cout<<ans[i]<<endl;
    }
    for(int i=0; i<x; i++)
    {
        if(ans[i]>0)
        {
            an=an*(pow(i,ans[i]-1))*(i-1);
        }
    }
    return an;
}

int main()
{
    int x;
    cin>>x;
    cout<<numofcoprimes(x);
}
