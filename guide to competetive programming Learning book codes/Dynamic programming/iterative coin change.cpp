#include <bits/stdc++.h>
using namespace std;

int main()
{
    int coins[3] = {1, 3, 4};
    int x;
    cin >> x;
    int value[x + 1];
    int first[x + 1];
    value[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        value[i] = 9999;
        for (int j = 0; j < 3; j++)
        {
            if (i - coins[j] >= 0 && value[i - coins[j]] + 1 < value[i])
            {
                value[i] = value[i - coins[j]] + 1;
                first[i] = coins[j];
            }
        }
    }
    while (x>0)
    {
        cout << first[x] << " ";
        x -= first[x];
    }
}