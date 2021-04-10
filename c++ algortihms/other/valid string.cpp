#include<iostream>
using namespace std;

bool checkstr(char arr[])
{
    for(int i=0; arr[i]!='\0'; i++)
    {
        if(!(arr[i]>=65&&arr[i]<=90)&&!(arr[i]>=97&&arr[i]<=122)&&!(arr[i]>=44&&arr[i]<=57)&&arr[i]!=' ')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char arr[100];
    gets(arr);
    if(checkstr(arr))
    {
        cout<<"good";
    }
    else
        cout<<"no";
}
