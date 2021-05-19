#include <bits/stdc++.h>
using namespace std;

int countBitsFirstMethod(int n)
{
    //brian keningam's algorithm
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

int popCount(int n)
{
    return __builtin_popcount(n);
}

int main()
{
    int n;
    cin >> n;
    cout << countBitsFirstMethod(n) << endl;
    cout << countBitFast(n) << endl;
    cout << popCount(n) << endl;
}