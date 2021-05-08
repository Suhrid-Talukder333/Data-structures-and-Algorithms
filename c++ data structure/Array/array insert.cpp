#include <bits/stdc++.h>
using namespace std;

void insert(int arr[], int n, int filled, int x, int pos)
{
    if (filled == n)
    {
        return; //we cant add anymore if its a static array container and is full
    }
    if (pos + 1 > filled)
    {
        arr[pos] = x;
    }
    else
    {
        for (int i = n - 1; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos] = x;
    }
}

int main()
{
    int arr[8] = {1, 34, 6, 2, 5, 8, 4};
    int filled = 7;
    int x, pos;
    cin >> x >> pos;
    insert(arr, 8, filled, x, pos);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}