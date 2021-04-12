#include <bits/stdc++.h>
using namespace std;

int kaden(int a[], int n)
{
    int current = 0;
    int best = 0;
    for (int i = 0; i < n; i++)
    {
        current += a[i];
        if (current < 0)
        {
            current = 0;
        }
        best = max(current, best);
    }
    return best;
}

int main()
{
    int arr[8] = {1,-2,3,-4,1,-2,3,-4};
    cout << kaden(arr, 8);
}