//Calculate the minimum number of people needed so that the percentage of 2 peple having the same
//birthday is p%

#include <bits/stdc++.h>
using namespace std;

void solve(float p)
{
    float x = 1.0;
    float numerator = 365;
    float denominator = 365;
    int people = 0;
    if (p == 1)
    {
        people = 366;
    }
    else
    {
        while (x > 1 - p)
        {
            x *= (numerator / denominator);
            numerator--;
            people++;
        }
    }
    cout << people;
}

int main()
{
    float p;
    cin >> p;
    p = p / 100;
    solve(p);
}