#include <bits/stdc++.h>
using namespace std;

void solve(int patrol[], int dist[], int n)
{
    int prev_patrol = 0;
    int curr_petrol = 0;
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        curr_petrol += patrol[i] - dist[i];
        if (curr_petrol < 0)
        {
            start = start + 1;
            curr_petrol = 0;
            prev_patrol = curr_petrol;
        }
    }
    cout << ((curr_petrol + prev_patrol) >= 0 ? start + 1 : -1);
}

int main()
{
    int patrol[4] = {4, 8, 7, 4};
    int dist[4] = {6, 5, 3, 5};

    solve(patrol, dist, 4);
}