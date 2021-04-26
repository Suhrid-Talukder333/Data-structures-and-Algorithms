#include <bits/stdc++.h>
using namespace std;

int countBitsFirstMethod(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += (n & 1);
        n = n >> 1;
    }
    return ans;
}

int countBitFast(int n)
{
    int ans = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        ans++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << countBitsFirstMethod(n) << endl;
    cout << countBitFast(n) << endl;
}