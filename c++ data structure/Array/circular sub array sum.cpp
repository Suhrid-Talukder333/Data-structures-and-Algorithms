#include <bits/stdc++.h>
using namespace std;

int maxSubSum(int arr[], int n)
{
    int ans = 0;
    int current = 0;
    for (int i = 0; i < n; i++)
    {
        current += arr[i];
        if (current < 0)
        {
            current = 0;
        }
        ans = max(ans, current);
    }
    return ans;
}

int minSubSum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] *= (-1);
    }
    int current = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        current += arr[i];
        if (current < 0)
        {
            current = 0;
        }
        ans = max(ans, current);
    }
    return ans * (-1);
}

int solve(int arr[], int n)
{
    int maxSum = maxSubSum(arr, n);
    if (maxSum < 0)
    {
        return maxSum;
    }
    int arraySum = 0;
    for (int i = 0; i < n; i++)
    {
        arraySum += arr[i];
    }
    int minSum = minSubSum(arr, n);
    int circularSum = arraySum - minSum;
    return circularSum >= maxSum ? circularSum : maxSum;
}

int main()
{
    int arr[4] = {5, -2, 3, 4};
    cout << solve(arr, 4);
}