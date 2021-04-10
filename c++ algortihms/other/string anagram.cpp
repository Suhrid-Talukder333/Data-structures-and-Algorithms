#include<iostream>
using namespace std;

bool check(char arr[],char arr1[])
{
    int a[122];
    for(int i=0; i<122; i++)
    {
        a[i]=0;
    }
    for(int i=0; arr[i]!='\0'; i++)
    {
        a[arr[i]]++;
    }
    for(int i=0; arr1[i]!='\0'; i++)
    {
        a[arr1[i]]--;
    }
    for(int i=0; i<122; i++)
    {
        if(a[i]>0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char arr[100];
    char arr1[100];
    gets(arr);
    gets(arr1);
    if(check(arr,arr1))
    {
        cout<<"anagram";
    }
    else{
        cout<<"not";
    }
}
