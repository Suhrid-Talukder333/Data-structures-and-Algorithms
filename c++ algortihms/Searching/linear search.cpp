#include <bits/stdc++.h>
using namespace std;

void linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << i << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}

int main()
{
    int arr[8] = {1, 2, 4, 5, 6, 8, 9, 11};
    int x;
    cin >> x;
    linearSearch(arr, 8, x);
}