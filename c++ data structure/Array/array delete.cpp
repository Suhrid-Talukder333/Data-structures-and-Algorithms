#include <bits/stdc++.h>
using namespace std;

void erase(int arr[], int &length, int x)
{
    int pos = -1;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == x)
        {
            pos = i;
        }
    }
    if (pos == -1)
    {
        return;
    }
    if (pos == length - 1)
    {
        length--;
    }
    else
    {
        for (int i = pos; i < length - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        length--;
    }
}

int main()
{
    int arr[8] = {1, 34, 6, 2, 5, 8, 4, 10};
    int x;
    int length = 8;
    cin >> x;
    erase(arr, length, x);
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}