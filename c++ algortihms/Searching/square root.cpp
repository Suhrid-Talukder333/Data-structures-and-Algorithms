#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = -1;
    int x;
    cin >> x;
    int start = 1;
    int end = x;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (mid * mid <= x)
        {
            ans = max(ans, mid);
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << ans;
}