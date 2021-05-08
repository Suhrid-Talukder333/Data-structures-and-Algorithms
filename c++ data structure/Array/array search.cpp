#include <bits/stdc++.h>
using namespace std;

void search(int arr[], int n, int x)
{
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            ans = i;
        }
    }
    cout << ans;
}

int main()
{
    int arr[8] = {1, 34, 6, 2, 5, 8, 4, 7};
    int x;
    cin >> x;
    search(arr, 8, x);
}