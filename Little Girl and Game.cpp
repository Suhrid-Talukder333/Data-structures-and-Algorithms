#include<iostream>
#include<string>
using namespace std;
int check[123];


int main()
{
    string arr;
    cin>>arr;
    int ans=0;
    for(int i=0; arr[i]!='\0'; i++)
    {
        check[arr[i]]++;
    }
    for(int i=97; i<=122; i++)
    {
        if(check[i]%2!=0)
        {
            ans=ans+check[i];
        }
    }
    if(ans>0)
    {
       if(ans%2==0)
    {
        cout<<"Second";
    }
    else
        cout<<"First";
    }
    else
    {
        cout<<"First";
    }
}
