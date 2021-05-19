//given an array of n size and that array has values in range 1 to n+1. every number appears only once. find the missing number

#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x ^= arr[i];
    }
    int y = 0;
    for (int i = 1; i <= n + 1; i++)
    {
        y ^= i;
    }
    return x ^ y;
}

int main()
{
    int n = 6;
    int arr[n] = {1, 3, 4, 5, 6, 7};
    cout << solve(arr, n);
}