//an array of packets having different amount of choclates in them, distribute any 1 packet to each of the m children so that the
//difference of amount of choclate is minimal find out the minimal difference

#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int m)
{
    if (m >= n)
    {
        cout << -1;
        return;
    }
    sort(arr, arr + n);
    int ans = arr[m - 1] - arr[0];
    for (int i = 1; (i + m - 1) < n; i++)
    {
        ans = min(ans, (arr[i + m - 1] - arr[i]));
    }
    cout << "Minimum difference " << ans << endl;
}

int main()
{
    int arr[7] = {7, 3, 2, 4, 9, 12, 56};
    int m;
    cin >> m;
    solve(arr, 7, m);
}