#include<iostream>
#include<cmath>
using namespace std;

int seive[9999999];

void seiv()
{
    seive[0]=seive[1]=1;
    int n=9999999;
    int sq=sqrt(n);
    for(int i=4; i<=n; i=i+2)
    {
        seive[i]=1;
    }
    for(int i=3; i<=sq; i=i+2)
    {
        if(seive[i]==0)
        {
            for(int j=i*i; j<=n; j=j+i)
            {
                seive[j]=1;
            }
        }
    }
}

int main()
{
    seiv();
    int n;
    cin>>n;
    if(seive[n]==0)
    {
        cout<<"prime";
    }
    else
        cout<<"not prime";
}
