#include<iostream>
using namespace std;

bool check(char arr[],char arr1[])
{
    long long int x=1,h=0;
    for(int i=0; arr[i]!='\0'; i++)
    {
        h=h|x<<((int)arr[i]);
    }
    for(int i=0; arr1[i]!='\0'; i++)
    {
        if(h&x<<((int)arr1[i]))
        {
            continue;
        }
        else
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
