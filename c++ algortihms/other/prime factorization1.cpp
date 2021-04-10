#include<iostream>
#include<vector>
using namespace std;

void factorization(int num)
{
    vector<int> v;
    for(int i=2; i*i<=num; i++)
    {
        while(num%i==0)
        {
            v.push_back(i);
            num=num/i;
        }
    }
    if(num>1)
    {
        v.push_back(num);
    }
    for(int i=0; i<(int)v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    int n=84;
    factorization(n);
}
