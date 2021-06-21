#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int prefix[6] = {0};
    int q;
    cin >> q;
    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        prefix[l] += x;
        prefix[r + 1] -= x;
    }
    int s = 0;
    for (int i = 0; i < 5; i++)
    {
        s += prefix[i];
        arr[i] += s;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
