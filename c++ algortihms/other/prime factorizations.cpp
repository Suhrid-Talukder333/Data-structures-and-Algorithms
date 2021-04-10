#include<bits/stdc++.h>
using namespace std;
bool notPrime[10000004];
vector<int>primes;

void seive()
{
    notPrime[0]=notPrime[1]=true;
    for(int i=4; i<10000004; i+=2)
    {
        notPrime[i]=true;
    }
    for(int i=3; i*i<=10000004; i+=2) 
    {
        if(!notPrime[i])
        {
            for(int j=i*i; j<=10000004; j+=i+i)
            {
                notPrime[j]=true;
            }
        }
    }
    for(int i=1; i<10000004; i++)
    {
        if(!notPrime[i])
        {
            primes.push_back(i);
        }
    }
}

void primeFact(int n)
{
    vector<int>factors;
    for(int i=0; i<(int)primes.size() && primes[i]*primes[i]<=n; i++)
    {
        if(notPrime[n]==false)
        {
            factors.push_back(n);
            n/=n;
            break;
        }
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {
                n/=primes[i];
                factors.push_back(primes[i]);
            }
        }
    }
    if(n!=1)
        factors.push_back(n);
    for(int i=0; i<(int)factors.size(); i++)
    {
        cout<<factors[i]<<endl;
    }
}

int main()
{
    seive();
    int n; cin >> n;
    primeFact(n);
}