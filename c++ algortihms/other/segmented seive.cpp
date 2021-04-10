#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
bool notPrimes[100001];

void seive()
{
    notPrimes[0]=notPrimes[1]=true;
    for(int i=4; i<100001; i+=2)
    {
        notPrimes[i]=true;
    }
    for(int i=3; i*i<=100001; i+=2)
    {
        if(notPrimes[i] == false)
        {
            for(int j = i*i; j < 100001; j+=i+i)
            {
                notPrimes[j]=true;
            }
        }
    }
    for(int i=1; i<100001; i++)
    {
        if(notPrimes[i] == false)
        {
            primes.push_back(i);
        }
    }
}

void init(long long L ,long long R)
    {
    	if(L == 1) L++;
     
    	int maxN = R - L + 1;
    	vector<int>ar(maxN , 0);
     
    	for(int p : primes)
    	if(p*p <= R)
    	{
    		long long i = (L / p) * p;
    		if(i < L) i += p;
     
    		for(;i<=R;i+=p)
    		{
    			if(i != p)
    			    ar[i-L] = 1;
    		}
    	}
     
    	for(int i=0;i<maxN;i++)
    	{
            if(ar[i] == 0)
    	    {
                cout<<L + i<<endl;
            }
        }
    }
int main()
{
    seive();
    long long a,b; cin >> a >> b;
    init(a,b);
}