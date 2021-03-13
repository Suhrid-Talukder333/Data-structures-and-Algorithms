#include<iostream>
using namespace std;

int euclidgcd(int a,int b)
{
    int x;
    if(b==0)
        return a;
    else
    {
        x=a%b;
        return euclidgcd(b,x);
    }
}

int main()
{
    int i,j;
    cin>>i>>j;
    cout<<euclidgcd(i,j);
    return 0;
}
