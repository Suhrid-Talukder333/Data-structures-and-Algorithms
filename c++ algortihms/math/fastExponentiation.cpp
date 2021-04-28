#include <bits/stdc++.h>
using namespace std;

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int subpower = pow(n, p / 2);
    if (p & 1)
    {
        return n * subpower * subpower;
    }
    else
    {
        return subpower * subpower;
    }
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << power(n, p);
}