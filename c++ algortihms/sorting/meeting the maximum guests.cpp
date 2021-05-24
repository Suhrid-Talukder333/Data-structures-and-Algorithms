//*** 800 means 8:00 clock time and 530 means 5:30

#include <bits/stdc++.h>
using namespace std;

int solve(int arrival[], int departure[], int n1, int n2)
{
    sort(arrival, arrival + n1);
    sort(departure, departure + n2);
    int ans = 1;
    int i = 1, j = 0;
    int current = 1;
    while (i < n1 && j < n2)
    {
        if (arrival[i] < departure[j])
        {
            current++;
            i++;
        }
        else
        {
            current--;
            j++;
        }
        ans = max(ans, current);
    }
    return ans;
}

int main()
{
    int arrival[6] = {900, 940, 950, 1500, 1100, 1800};
    int departure[6] = {910, 1200, 1120, 1130, 1900, 2000};

    cout << solve(arrival, departure, 6, 6);
}