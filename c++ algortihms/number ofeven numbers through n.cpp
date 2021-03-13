#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; //take the number
    cin >> n;
    if(n%2==0) //check if the number is even
        cout<<n/2; //the number of all the even numbers through n is equal to n/2
    else
        cout<<n/2; // if it isn't even then it is equal to floor(n/2)
    
}