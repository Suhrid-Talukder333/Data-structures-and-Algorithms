//array has n books with their total page count
// k students
//every student can read contiguous books and has to read all the pages
//minimize the maximum pages allocated by a student among k students

#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int start, int end)
{
    int ans = 0;
    for (int i = start; i < end; i++)
    {
        ans += arr[i];
    }
    return ans;
}

int solve(int arr[], int n, int k)
{
    if (n == 1)
    {
        return arr[0];
    }
    if (k == 1)
    {
        return sum(arr, 0, n);
    }
    int ans = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        ans = min(ans, max(solve(arr, i, k - 1), sum(arr, i, n)));
    }
    return ans;
}
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int k;
    cin >> k;
    cout << solve(arr, 4, k);
}