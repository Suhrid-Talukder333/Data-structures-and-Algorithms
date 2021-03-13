//if there is a n X m grid, how many ways can i go from one corner to another
//This can be solved using dp, but if the situation and the problem is simple than it can also be done by 
// using combinations
//For dp use:
//  *  * b
//  *  * *
//  a  * *
//for getting to a to b we can only go right or up.
//for this kind of cases we can say that for all the edge points on the up and right sides are only 1 point 
// they are the sum of the ways of their previous points
//To understand what i am saying lets give 1 point to all the edge points
//  1  * b
//  1  * *
//  a  1 1
// so the number of ways to get to c is equal to 1 + 1 the sum ways of its previous nodes
//for more example
//  1 * b
//  1 c d
//  a 1 1 
// if  i want to know the ways i can get to d i have to know how many ways i can get to c and also the edge node which's value is 1
// so the number of ways to get to d is c + 1 , 2 + 1 =3
//using nthis method we can form the below graph
//  1 3 6
//  1 2 3
//  a 1 1 
// so from a to b we have 6 ways 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin >> n >> m;
    int arr[n+1][m+1];
    for(int i=1; i<=n; i++)
    {
        arr[i][1]=1;
    }
    for(int i=1; i<=m; i++)
    {
        arr[n][i]=1;
    }
    for(int i=n-1; i>=1; i--)
    {
        for(int j=2; j<=m; j++)
        {
            arr[i][j]=arr[i+1][j]+arr[i][j-1];
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<arr[1][m]<<endl;
    //Alternative way
    //(a+b) n a == (a+b) n b this is equal to the total ways in a aXb grid from the bottom left point to the right
    //also meaning ways = (a+b)!/(b!)(a!)
    //most up most point
    // here a is number of columns and b is numbers of row

    int ans=1;
    int rowColu= n-1+m-1;
    int k=1;
    for(int i=m; i<=rowColu; i++)
    {
        ans *= i;
    }
    for(int i=n-1; i>=1; i--)
    {
        k *= i;
    }
    cout<<ans/k;
}