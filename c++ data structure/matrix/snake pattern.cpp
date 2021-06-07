#include <bits/stdc++.h>
using namespace std;

void printSnake(int **arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        if (i & 1 != 0)
        {
            for (int j = c - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j < c; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main()
{
    int r, c;
    cin >> r >> c;
    int **arr;
    arr = new int *[r];
    int x = 1;
    for (int i = 0; i < r; i++)
    {
        arr[i] = new int[c];
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = x;
            x++;
        }
    }

    printSnake(arr, r, c);
}