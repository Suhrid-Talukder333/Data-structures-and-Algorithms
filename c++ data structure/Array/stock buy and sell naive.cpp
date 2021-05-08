#include <bits/stdc++.h>
using namespace std;

int maxProfit(int arr[], int start, int end)
{
    if (start >= end)
    {
        return 0;
    }
    int profit = 0;
    for (int i = start; i <= end; i++)
    {

        for (int j = i + 1; j <= end; j++)
        {
            if ((arr[j] - arr[i]) > 0)
            {
                int currentProfit = arr[j] - arr[i] + maxProfit(arr, start, i - 1) + maxProfit(arr, j + 1, end);
                profit = max(profit, currentProfit);
            }
        }
    }
    return profit;
}

int main()
{
    int arr[5] = {1, 5, 3, 8, 12};
    cout << maxProfit(arr, 0, 4);
}