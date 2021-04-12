#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int current_suffix_sum = 0;
    int max_suffix_sum = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        current_suffix_sum += arr[i];
        max_suffix_sum = max(current_suffix_sum, max_suffix_sum);
    }
    cout << max_suffix_sum << endl;
}