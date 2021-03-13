#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int numoffact(vector<int> &a,int s)
{
    int ans=1,j;
    int arr[s+1];
    for(int i=0; i<=s; i++)
    {
        arr[i]=0;
    }
    for(int i=0; i<(int)a.size(); i++)
    {
        j=a[i];
        arr[j]++;
    }
    for(int i=0 ; i<=s; i++)
    {
        if(arr[i]>0)
        {
            ans=ans*((pow(i,(arr[i]+1))-1)/(i-1));
        }
    }
    return ans;
}

int factorization(int n)
{
    int an=n;
    vector<int> v;
    for(int i=2; i*i<=n; i++)
    {
        while(n%i==0)
        {
            v.push_back(i);
            n=n/i;
        }
    }
    if(n>1)
    {
        v.push_back(n);
    }
    return numoffact(v,an);
}

int main()
{
    int n;
    cin>>n;
    cout<<factorization(n);
}
