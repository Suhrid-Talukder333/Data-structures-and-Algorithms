//We wil take all the divisors till sqrt(n) as we know that divisors lie in that sqrt(n) area. but we will have
//to increase the count every time with 2 because every time we will get a divisors we will have a 
//divisor pair({a,b}) where a*b == n where a divides n and b also divides n
//then lastly we will check if it is a square number or not if its square then that pair is equal to({a,a})
//so we will have to only increase by one but if its not a square number than we will increase by 2

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
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
            c+=2;
    }
    
    cout << c ;
}