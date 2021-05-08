#include <bits/stdc++.h>
using namespace std;
void maxSubArraySum(int arr[], int n)
{
    int maxSum = 0;
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        if (currentSum >= maxSum)
        {
            maxSum = max(maxSum, currentSum);
        }
    }
    cout << maxSum;
}

int main()
{
    int arr[8] = {2, 3, -8, 7, -1, 2, 3};
    maxSubArraySum(arr, 8);
}
