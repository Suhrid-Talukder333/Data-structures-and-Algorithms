#include<iostream>
using namespace std;


int gcd(int a,int b)
{
    int x;
    if(b==0)
    {
        return a;
    }
    else{
        x=a%b;
        return gcd(b,x);
    }
}



void coprime(int a , int b)
{
    for(int i=1; i<=max(a,b); i++)
    {
        if(gcd(a,b)>1)
        {
            cout<<"not co prime";
            return;
        }
    }
    cout<<"co-prime";

}


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    coprime(a,b);
}
