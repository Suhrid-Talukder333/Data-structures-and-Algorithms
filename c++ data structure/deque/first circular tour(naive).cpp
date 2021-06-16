#include <bits/stdc++.h>
using namespace std;

void solve(int patrol[], int dist[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int curr_petrol = 0;
        int end = i;
        while (true)
        {
            curr_petrol += patrol[end] - dist[end];
            if (curr_petrol < 0)
            {
                break;
            }
            if (end == i)
            {
                cout << i + 1;
                return;
            }
            end = (end + 1) % n;
        }
    }
    cout << -1;
}

int main()
{
    int patrol[4] = {4, 8, 7, 4};
    int dist[4] = {6, 5, 3, 5};

    solve(patrol, dist, 4);
}