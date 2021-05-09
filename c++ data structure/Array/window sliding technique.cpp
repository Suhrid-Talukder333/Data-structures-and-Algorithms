#include <bits/stdc++.h>
using namespace std;

void windowSliding(int arr[], int n, int k)
{
    int maxSum = -1;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += arr[i];
    }
    maxSum = max(maxSum, sum);
    for (int i = k; i < n; i++)
    {
        sum -= arr[i - k];
        sum += arr[i];
        maxSum = max(maxSum, sum);
    }
    cout << maxSum;
}

int main()
{
    int arr[6] = {1, 9, 30, -5, 20, 7};
    int k = 3;
    windowSliding(arr, 6, k);
}