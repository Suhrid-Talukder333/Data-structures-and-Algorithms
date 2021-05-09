//equilibrium point is an position in array where the all the left sum of it and all the right sum
//of it is same

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {3, 4, 8, -9, 20, 6};
    int n = 6;
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    int right = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (prefixSum[i - 1] == right)
        {
            cout << "YES " << i << endl;
            return 0;
        }
        right += arr[i + 1];
    }
    cout << "No";
}