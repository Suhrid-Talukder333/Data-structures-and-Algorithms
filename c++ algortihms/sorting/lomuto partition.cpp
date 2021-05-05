//in this algorithm it always partions for the last element
#include <bits/stdc++.h>
using namespace std;

void lomuto(int arr[], int n)
{
    int i = -1;
    for (int k = 0; k < n - 1; k++)
    {
        if (arr[k] <= arr[n - 1])
        {
            i++;
            swap(arr[i], arr[k]);
        }
    }
    swap(arr[i + 1], arr[n - 1]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[8] = {1, 6, 8, 34, 8, 89, 2, 4};
    lomuto(arr, 8);
}