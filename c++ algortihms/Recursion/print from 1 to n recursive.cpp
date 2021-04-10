#include <bits/stdc++.h>
using namespace std;

int recursivePrint(int n)
{
    if (n == 0)
    {
        return 0;
    }
    cout << n << endl;
    return recursivePrint(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << recursivePrint(n) << endl;
}