//Firstly we will see the O(n*n/ln(n)) approach
//here we will use the number of divisor function to get all the divisors of number 1 through n
#include<bits/stdc++.h>
using namespace std;

int nod(int n)
{
    int c=0;
    int s=sqrt(n);
    for(int i=1; i < s ; i++)
    {
        if(n%i==0)
        {
            c+=2;
        }
    }
    if(n%s==0)
    {
        if(s*s==n)
        {
            c++;
        }
        else
        {
            c+=2;
        }
    }
    return c;
}


int main()
{
    int n; cin >> n; 
    int sum=0;
    //O(n*(n/ln(n))) approach
    for(int i=1; i<=n; i++)
    {
        sum+=nod(i);
    }
    cout << sum<< endl;
    //divisor list approach: if we see all the divisors of 1 through n then we will see that some divisors are same among
    //many n for example 1 is a divisor of 1 and also 2,3,4.....n so every time we count divisor of any number x than it can occur for
    // any number y where x!=y
    //so in this approach we can go through all i where 1<=i<=n options and divide n with that to get the occurence of that divisor
    //in all the numbers through 1 to n
    //O(n)
    int sum1=0;
    for(int i=1; i<=n; i++)
    {
        sum1+=n/i;
    }
    cout<<sum1<<endl;
    //O(sqrt(n))
    //we will use pair divisors and we will only take pairs where pair({a,b}) and a<b so that we do not overcount
    //so we can do this by (n/i)-i
    //then we will double that because they are pairs
    //then add pairs where a==b because there can be at most sqrt(n) divisors we only have to add sqrt(n) to the total
    int sum2=0;
    int s=sqrt(n);
    for(int i=1; i<=s; i++)
    {
        if(n%i==0)
        {
            sum2+=((n/i)-i);
        }
    }
    sum2*=2;
    sum2+=s;
    cout<<sum2<<endl;
    //naive approach O(n*n)
    //check for divisor for every n itteratively
    int sum3=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                sum3++;
            }
        }
    }
    cout<<sum3<<endl;
}