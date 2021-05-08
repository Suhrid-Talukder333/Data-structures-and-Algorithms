#include <bits/stdc++.h>
using namespace std;

void searchLargest(int arr[], int n)
{
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, arr[i]);
    }
    cout << ans;
}

int main()
{
    int arr[8] = {1, 34, 6, 2, 5, 8, 4, 10};
    searchLargest(arr, 8);
}