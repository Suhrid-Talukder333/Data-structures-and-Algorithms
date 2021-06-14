#include <bits/stdc++.h>
using namespace std;

int largestAreaHistogram(int check[], int m)
{
    stack<int> s;
    int ps[m];
    int ns[m];
    for (int i = 0; i < m; i++)
    {
        while (s.empty() == false && check[s.top()] >= check[i])
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
    while (s.empty() == false)
    {
        s.pop();
    }
    for (int i = m - 1; i >= 0; i--)
    {
        while (s.empty() == false && check[s.top()] >= check[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            ns[i] = m;
        }
        else
        {
            ns[i] = s.top();
        }
        s.push(i);
    }
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        int curr = check[i];
        curr += (check[i] * (ns[i] - i - 1));
        curr += (check[i] * (i - ps[i] - 1));
        res = max(res, curr);
    }
    return res;
}

void solve(int arr[][4], int n, int m)
{
    int check[m];
    int res = largestAreaHistogram(arr[0], m);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                arr[i][j] += arr[i - 1][j];
            }
        }
        res = max(res, largestAreaHistogram(arr[i], m));
    }
    cout << res;
}

int main()
{
    int arr[4][4] = {{0, 1, 1, 0},
                     {1, 1, 1, 1},
                     {1, 1, 1, 1},
                     {1, 1, 0, 0}};

    solve(arr, 4, 4);
}