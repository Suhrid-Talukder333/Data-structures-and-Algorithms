//given a n length rope and three different lengths of measurement, what is the maximum piceces we can
//get that are equal to the measurements

#include <bits/stdc++.h>
using namespace std;

int solve(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    int result = max(solve(n - a, a, b, c), max(solve(n - b, a, b, c), solve(n - c, a, b, c)));
    if (result == -1)
    {
        return -1;
    }
    return result + 1;
}

int main()
{
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    cout << solve(n, a, b, c);
}