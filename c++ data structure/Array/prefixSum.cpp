#include <bits/stdc++.h>
using namespace std;

void getSum(int prefixSum[], int start, int end)
{
    if (start == 0)
    {
        cout << prefixSum[end] << endl;
    }
    else
    {
        cout << prefixSum[end] - prefixSum[start - 1] << endl;
    }
}

int main()
{
    int arr[6] = {1, 9, 30, 5, 20, 7};
    int prefixSum[6];
    prefixSum[0] = arr[0];
    for (int i = 1; i < 6; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    getSum(prefixSum, 0, 5);
    getSum(prefixSum, 2, 4);
}