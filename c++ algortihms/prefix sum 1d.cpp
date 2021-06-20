#include <bits/stdc++.h>
using namespace std;

void prefixSum(int arr[], int pre[])
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            pre[i] = arr[i];
        }
        else
        {
            pre[i] = pre[i - 1] + arr[i];
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int pre[5];
    prefixSum(arr, pre);
    for (int i = 0; i < 5; i++)
    {
        cout << pre[i] << " ";
    }
    cout << endl;
    //for ranged queries we can get the sum from l to r by pre[r] - pre[l-1];
    cout << pre[3] - pre[1];
}