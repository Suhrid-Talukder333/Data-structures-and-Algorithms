//pow(x,y)mod z
#include<iostream>
using namespace std;

long long int bigmod(long long int x,long long int y, long long int z)
{
    if(y==0)
    {
        return 1;
    }
    if(y%2==0)
    {
        long long int a=bigmod(x,y/2,z);
        return (a*a)%z;
    }
    else if(y%2==1)
    {
        long long int i,j;
        i=x%z;
        j=bigmod(x,y-1,z);
        return (i*j)%z;
    }

}
int main()
{
    long long int a,b,c;
    while(cin>>a>>b>>c)
    {
        cout<<bigmod(a,b,c)<<endl;
    }
}
