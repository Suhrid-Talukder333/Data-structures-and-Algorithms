// if there are n tasks and the each individual task is independent of each other and for each task we have k choices
//then the way of doing all the work is equal to k * n

#include<bits/stdc++.h>
using namespace std;


int main()
{
    //for example 5 digit number every digit has to be odd, how many numbers can we make?
    //we know that 1,3,5,7,9 are the only odd digits
    //so for every 5 digit in the number we have 5 choices we can independently use
    // so the answere would be 5*5*5*5*5
    cout<<5*5*5*5*5;
    //lets say we have n cases and for every independent case we have k choices
    int n,k; cin >> n >> k;
    cout<<pow(n,k);
}