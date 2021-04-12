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
    int current_prefix_sum = 0;
    int max_prefix_sum = -1;
    for (int i = 0; i < n; i++)
    {
        current_prefix_sum += arr[i];
        max_prefix_sum = max(current_prefix_sum, max_prefix_sum);
    }
    cout << max_prefix_sum << endl;
}