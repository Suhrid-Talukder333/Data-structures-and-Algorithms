#include <bits/stdc++.h>
using namespace std;

int maxProfit(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += arr[i] - arr[i - 1];
        }
    }
    return profit;
}

int main()
{
    int arr[5] = {1, 5, 3, 8, 12};
    cout << maxProfit(arr, 5);
}