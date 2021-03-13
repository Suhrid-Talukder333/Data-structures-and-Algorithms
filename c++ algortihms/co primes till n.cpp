#include<iostream>
#include<vector>
using namespace std;

int gcd(int a,int b)
{
    int x;
    if(b==0)
    {
        return a;
    }
    else
    {
        x=a%b;
        return gcd(b,x);
    }
}


void coprimes(int a)
{
    vector<int> ans;
    for(int i=1; i<a; i++)
    {
        if(gcd(a,i)==1)
        {
           ans.push_back(i);
        }
    }
    for(int i=0; i<(int)ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}

int main()
{
    int x,y;
    cin>>x;
    coprimes(x);
}
