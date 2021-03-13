#include<bits/stdc++.h>
using namespace std;
#define mx 1000005
bool notPrime[mx];
vector<int>primes;
void seive()
{
    notPrime[0]=notPrime[1]=true;
    for(int i=4; i<mx; i+=2)
    {
        notPrime[i]=true;
    }
    for(int i=3; i*i<=mx; i+=2)
    {
        if(notPrime[i]==false)
        {
            for(int j=i*i; j<=mx; j+=i)
            {
                notPrime[j]=true;
            }
        }
    }
    for(int i=0; i<mx; i++)
    {
        if(notPrime[i]==false)
        {
            primes.push_back(i);
        }
    }
}

int divisors(int n)
{
    int sum=1;
    for(int i=0; primes[i]<sqrt(n)+1; i++)
    {
        if(n%primes[i]==0)
        {
            int cnt=0;
            while(n%primes[i]==0)
            {
                n/=primes[i];
                cnt++;
            }
            sum*=(cnt+1);
        }
    }
    if(n>1)
        sum=sum*2;
    return sum;
}



int main()
{
    seive();
    int n; cin >> n;
    printf("divisors count %d\n",divisors(n));
}