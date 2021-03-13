#include<bits/stdc++.h>
using namespace std;

// if n number of occurances are all unique to each other than the total occurance will be the sum of all the n occurances
// uniquely

//let's say if we were to find how many numbers are multiplicatives of 5 or multiplicatives of 7 from 1 to 30
//We know that they do not have any same multiplications so they are all unique
//so we just add all the numbers of multiplacations of 7 and 5, add them up to get the desired result

int main()
{
    int d; cin >> d;
    int n,m; cin >> n >> m;
    int cnt1=0,cnt2=0;
    for(int i=1; i*n<=d; i++)
    {
        cnt1++;
    }
    for(int i=1; m*i<=d; i++)
    {
        cnt2++;
    }
    cout<<cnt1+cnt2;
    cout<<endl;
    //ALTERNATIVELY O(n) way:
    cnt1=d/n;
    cnt2=d/m;
    cout<<cnt1+cnt2<<endl;
}