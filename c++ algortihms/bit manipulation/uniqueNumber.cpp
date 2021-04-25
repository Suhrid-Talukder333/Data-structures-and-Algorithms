#include <bits/stdc++.h>
using namespace std;

//given an array where there is only one unique number, find it
//1^1 = 0;
//1^2 != 0;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans ^= arr[i];
    }
    cout << ans;
}