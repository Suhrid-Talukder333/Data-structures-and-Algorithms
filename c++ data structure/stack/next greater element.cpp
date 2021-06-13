#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    stack<int> s;
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
    for (auto x : ans)
    {
        cout << x << " ";
    }
}

int main()
{
    int arr[5] = {20, 30, 10, 5, 15};
    solve(arr, 5);
}