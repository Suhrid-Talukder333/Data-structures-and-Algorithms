#include<iostream>
using namespace std;

int main()
{
    int num,sum=0,ans=0;
    cin>>num;
    int a[num+1];
    for(int i=1; i<=num; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=num; i++)
    {
        sum=sum+a[i];
    }
    for(int i=1; i<=5; i++)
    {
        if((sum+i)%(num+1)!=1)
        {
            ans++;
        }
    }
    cout<<ans;
}
