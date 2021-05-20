#include <bits/stdc++.h>
using namespace std;

vector<bool> check(10000, true);

void seive()
{
    for (int i = 2; i * i <= 10000; i++)
    {
        if (check[i])
        {
            for (int j = i * i; j <= 10000; j += i)
            {
                check[j] = false;
            }
        }
    }
}

int main()
{
    seive();
    int n;
    cin >> n;
    if (check[n])
    {
        cout << "prime";
    }
    else
    {
        cout << "not";
    }
}