#include<bits/stdc++.h>
using namespace std;
bool notPrime[32770];
vector<int>primes;
void seive()
{
    notPrime[0]=notPrime[1]=true;

    for(int i=4; i<32770; i+=2)
    {
        notPrime[i]=true;
    }
    for(int i=3; i<sqrt(32770)+1; i+=2)
    {
        if(notPrime[i]==false)
        {
            for(int j=i*i; j<=32770; j+=i)
            {
                notPrime[j]=true;
            }
        }
    }
    for(int i=0; i<=32770; i++)
    {
        if(notPrime[i]==false)
        {
            primes.push_back(i);
        }
    }
}

int goldBach(int n)
{
    int sum=0;
    for(int i=0; primes[i]<=n/2; i++)
    {
        if(notPrime[n-primes[i]]==false)
        {
            printf("%d %d \n",primes[i],n-primes[i]);
            sum++;
        }
    }
    return sum;
}

int main()
{
    seive();
    int n; cin >> n;
    printf("sum %d\n",goldBach(n));
}