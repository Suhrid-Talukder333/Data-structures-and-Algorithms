#include <bits/stdc++.h>
using namespace std;

void majorityElement(int arr[], int n)
{
    int res = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[res])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            ans++;
        }
    }
    if (ans > (n / 2))
    {
        cout << res;
    }
    else
    {
        cout << -1;
    }
}

int main()
{
    int arr[6] = {0, 1, 2, 0, 0, 0};
    majorityElement(arr, 6);
}