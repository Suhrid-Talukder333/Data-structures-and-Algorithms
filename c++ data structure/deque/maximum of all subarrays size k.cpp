#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int k)
{
    deque<int> dq;
    for (int i = 0; i < n - k + 1; i++)
    {
        for (int j = i; j < i + k; j++)
        {
            if (dq.empty())
            {
                dq.push_front(j);
            }
            else if (arr[dq.front()] >= arr[j])
            {
                dq.push_back(j);
            }
            else if (arr[dq.front()] < arr[j])
            {
                while (dq.empty())
                {
                    dq.pop_back();
                }
                dq.push_front(j);
            }
        }
        cout << arr[dq.front()] << " ";
    }
}

int main()
{
    int arr[7] = {10, 8, 5, 12, 15, 7, 6};
    int k;
    cin >> k;
    solve(arr, 7, k);
}