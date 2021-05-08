//inverse kaden's finds the minimum sum sub array
#include <bits/stdc++.h>
using namespace std;

int inversekaden(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] *= (-1);
    }
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
    return ans * (-1);
}

int main()
{
    int arr[5] = {8, -4, 3, -5, 4};
    cout << inversekaden(arr, 5);
}