#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[pos], arr[i]);
            pos++;
        }
    }
}

int main()
{
    int arr[8] = {1, 0, 0, 2, 4, 6, 0, 5};
    solve(arr, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}