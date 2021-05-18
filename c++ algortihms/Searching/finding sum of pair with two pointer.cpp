//array has to be sorted
#include <bits/stdc++.h>
using namespace std;

void twoPointer(int arr[], int start, int end, int x)
{
    while (start != end)
    {
        int sum = arr[start] + arr[end];
        if (sum == x)
        {
            cout << "true";
            return;
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
    cout << -1;
}

int main()
{
    int arr[8] = {2, 4, 8, 9, 11, 12, 20, 30};
    sort(arr, arr + 8);
    int x;
    cin >> x;
    twoPointer(arr, 0, 7, x);
}