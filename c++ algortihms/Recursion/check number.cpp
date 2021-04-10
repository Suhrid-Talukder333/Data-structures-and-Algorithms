#include <bits/stdc++.h>
using namespace std;

int check(int arr[], int n, int i, int x)
{
    if (i == n)
    {
        return 0;
    }
    if (arr[i] == x)
    {
        return 1;
    }
    return check(arr, n, ++i, x);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    if (check(arr, n, 0, x))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}