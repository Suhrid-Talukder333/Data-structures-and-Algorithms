#include<iostream>
#include<cmath>
using namespace std;

int seive[9999999];

void seiv()
{
    seive[0]=1;
    seive[1]=1;
    int n=9999999;
    int sq=sqrt(n);
    for(int i=2; i<=sq; i++)
    {
        if(seive[i]==0)
        {
            for(int j=2*i; j<=n; j=j+i)
            {
                seive[j]=1;
            }
        }
    }
}
int main()
{
    seiv();
    int num;
    cin>>num;
    if(seive[num]==0)
    {
        cout<<"prime";
    }
    else
        cout<<"not";
}
