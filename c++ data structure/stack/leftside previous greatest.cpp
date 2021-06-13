#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (s.empty() == false && arr[i] >= s.top())
        {
            s.pop();
        }
        if (s.empty())
        {
            cout << -1 << " ";
        }
        else
        {
            cout << s.top() << " ";
        }
        s.push(arr[i]);
    }
}

int main()
{
    int arr[5] = {20, 30, 10, 5, 15};
    solve(arr, 5);
}