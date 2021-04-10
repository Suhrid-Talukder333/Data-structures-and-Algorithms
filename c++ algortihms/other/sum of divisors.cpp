#include<bits/stdc++.h>
using namespace std;
bool notPrime[10000001];
vector<int>primes;

void seive()
{
    notPrime[0]=notPrime[1]=true;
    for(int i=4; i<10000001; i+=2)
    {
        notPrime[i]=true;
    }
    for(int i=3; i<sqrt(10000001)+1; i+=2)
    {
        if(notPrime[i]==false)
        {
            for(int j=i*i; j<10000001; j+=i)
            {
                notPrime[j]=true;
            }
        }
    }
    for(int i=0; i<10000001; i++)
    {
        if(notPrime[i]==false)
        {
            primes.push_back(i);
        }
    }
}
//prime factorization method
int sumOfDivisors(int n)
{
    int sum=1,s,p;
    for(int i=0; primes[i]<sqrt(n)+1; i++)
    {
        if(n%primes[i]==0)
        {
            p=1;
            while(n%primes[i]==0)
            {
                n/=primes[i];
                p*=primes[i];
            }
            p*=primes[i];
            s=(p-1)/(primes[i]-1);
            sum*=s;
        }
    }

    if(n>1)
    {
        p=n*n;
        s=(p-1)/(n-1);
        sum*=s;
    }
    return sum;
}


int main()
{
    seive();
    int n; cin >> n;
    //factrization method
    printf("%d\n",sumOfDivisors(n));
    //O(sqrt(n)) method
    int sum=0; 
    int s=sqrt(n);
    for(int i=1; i<s; i++)
    {
        if(n%i==0)
        {
            sum+=i;//i is a divisor
            sum+=n/i;//the pair divisor of i
        }
    }
    if(n%s==0)//perfect square numbers
    {
        if(s*s==n)
        {
            sum+=s;
        }
        else
        {
            sum+=s;
            sum+=n/s;
        }
        
    }
    cout<<sum<<endl;
}