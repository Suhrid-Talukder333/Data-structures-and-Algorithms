#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    stack<int> s;
    int ps[n];
    int ns[n];
    for (int i = 0; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] >= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            ps[i] = -1;
        }
        else
        {
            ps[i] = s.top();
        }
        s.push(i);
    }
    while (!s.empty())
    {
        s.pop();
    }
    for (int i = n - 1; i >= 0; i--)
    {
        while (s.empty() == false && arr[s.top()] >= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            ns[i] = n;
        }
        else
        {
            ns[i] = s.top();
        }
        s.push(i);
    }
    int res = 0;
    for (auto x : ps)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto x : ns)
    {
        cout << x << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        curr += arr[i] * (ns[i] - i - 1);
        curr += arr[i] * (i - ps[i] - 1);
        res = max(curr, res);
    }
    cout << res;
}

int main()
{
    int arr[7] = {6, 2, 5, 4, 1, 5, 6};
    solve(arr, 7);
}