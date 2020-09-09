#include<iostream>
using namespace std;

void check(char arr[])
{
    int a[26];
    for(int i=0; i<26; i++)
    {
        a[i]=0;
    }
    for(int i=0; arr[i]!='\0'; i++)
    {
       if(arr[i]>=97&&arr[i]<=122)
       {
           a[arr[i]-97]++;
       }
    }
    for(int i=0; i<26; i++)
    {
        if(a[i]>1)
            {
                cout<<(char)(i+97)<<"is times"<<a[i]<<endl;
            }
    }
}

int main()
{
    char arr[100];
    gets(arr);
    check(arr);
}
