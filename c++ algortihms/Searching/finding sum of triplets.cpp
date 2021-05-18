#include <bits/stdc++.h>
using namespace std;

bool twoPointer(int arr[], int start, int end, int x)
{
    int sum = 0;
    while (start != end)
    {
        sum = arr[start] + arr[end];
        if (sum == x)
        {
            return true;
        }
        else if (sum > x)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return false;
}

int main()
{
    int arr[8] = {2, 4, 8, 9, 11, 12, 20, 30};
    int x;
    cin >> x;
    for (int i = 0; i < 7; i++)
    {
        if (twoPointer(arr, i + 1, 7, x - arr[i]))
        {
            cout << "true";
            return 0;
        }
    }
    cout << "false";
}