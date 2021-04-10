#include<iostream>
using namespace std;

bool check(char arr[])
{
    int x=1,h=0;
    for(int i=0; arr[i]!='\0'; i++)
    {
        if(h&x<<(arr[i]-97))
        {
            return false;
        }
        else
        {
            h=h|x<<(arr[i]-97);
        }
    }
    return true;
}

int main()
{
    char arr[100];
    gets(arr);
    if(check(arr))
    {
        cout<<"no duplicate";
    }
    else
    {
        cout<<"yes there is duplicate";
    }
}

