//we have array of duplicate numbers but 2 of the numbers dont have duplicates find them

#include <bits/stdc++.h>
using namespace std;

int setBitPos(int n)
{
    for (int i = 0; i <= 32; i++)
    {
        if (n & (1 << i))
        {
            return i;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        result ^= arr[i];
    }
    int p = setBitPos(result);
    vector<int> numbers;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & (1 << p))
        {
            numbers.push_back(arr[i]);
        }
    }
    int result2 = 0;
    for (int x : numbers)
    {
        result2 ^= x;
    }
    result = result ^ result2;
    cout << result << " " << result2;
}