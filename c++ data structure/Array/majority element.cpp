#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    //candidate selecting;
    int count = 1;
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[res])
        {
            ans++;
        }
    }
    if (ans >= (n / 2) + 1)
    {
        cout << arr[res];
    }
    else
    {
        cout << -1;
    }
}

int main()
{
    int arr[5] = {8, 3, 4, 8, 2};
    solve(arr, 5);
}