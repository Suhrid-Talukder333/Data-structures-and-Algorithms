#include<iostream>
#include<string>
using namespace std;


int change(int n)
{
    if(n>=8)
    {
        if(n==8)
        {
            cout<<"+3+5";
            return 0;
        }
        if(n==9)
        {
           cout<< "+3+3+3";
           return 0;
        }
        if(n==10)
        {
            cout<< "+5+5";
            return 0;
        }
        cout<<"+3";
        n=change(n-3);
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    change(n);
}

