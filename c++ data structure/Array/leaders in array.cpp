//leaders are the number in the array which dont have bigger numbers in the right side of the array
//from the position

#include <bits/stdc++.h>
using namespace std;

void leaders(int arr[], int n)
{
    int x = arr[n - 1];
    cout << x << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > x)
        {
            cout << arr[i] << " ";
            x = arr[i];
        }
    }
}

int main()
{
    int arr[8] = {1, 3, 5, 35, 7, 8, 6, 2};
    leaders(arr, 8);
}