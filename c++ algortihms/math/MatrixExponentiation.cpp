#include <bits/stdc++.h>
using namespace std;

//we use matrix exponentiation for solving linear recurrence problems like fibonacchi numbers where the n th
//term depends upon the previous k terms
//In matrix exponentiation we have a transformation matrix that is used to ger the value of the nth number of
//the sequence

// |0 1 |
// |1 1 |
//this is the transformation matrix that is used in generating fibonacchi numbers
//now if we want to generate the n th fibonnacchi number then
//        n-1
// {|0 1|}   |f(n-2)| - |f(n-1)|
// {|1 1|}   |f(n-1)| - |f(n)|

//to make this work we need to know the first f(n-1),f(n-2)....f(n-k) terms of the linear recurence

vector<vector<int>> multiply(vector<vector<int>> a, vector<vector<int>> b)
{
    vector<vector<int>> c(2, vector<int>(2));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int x = 0; x < 2; x++)
            {
                c[i][j] += (a[i][x] * b[x][j]);
            }
        }
    }
    return c;
}

vector<vector<int>> power(vector<vector<int>> a, int p)
{
    if (p == 1)
    {
        return a;
    }
    if (p & 1)
    {
        return multiply(a, power(a, p - 1));
    }
    else
    {
        vector<vector<int>> x = power(a, p / 2);
        return multiply(x, x);
    }
}

int solve(int n, vector<int> &f)
{
    if (n == 0 || n == 1)
    {
        return f[n];
    }
    vector<vector<int>> T(2, vector<int>(2));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (i < 1)
            {
                if (i == j - 1)
                {
                    T[i][j] = 1;
                }
                else
                {
                    T[i][j] = 0;
                }
            }
            else
            {
                T[i][j] = 1;
            }
        }
    }

    T = power(T, n - 1);
    int result = 0;
    for (int i = 0; i < 2; i++)
    {
        result += (T[1][i] * f[i]);
    }
    return result;
}

int main()
{
    vector<int> f(2);
    f[0] = 0;
    f[1] = 1;
    int n; //calculate the nth fibonacchi
    cin >> n;
    cout << solve(n, f);
}
