#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[8] = {1, 4, 2, 3, 5, 8, 7, 6};
    int length[8];
    for (int i = 0; i < 8; i++)
    {
        length[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                length[i] = max(length[i], length[j] + 1);
            }
        }
    }
    cout << length[7];
}