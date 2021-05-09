//this is for range<1000

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int start[5] = {1, 2, 5, 15};
    int end[5] = {5, 8, 7, 18};
    int ans[1000] = {0};
    for (int i = 0; i < 5; i++)
    {
        ans[start[i]]++;
        ans[end[i] + 1]--;
    }
    int res = -1, pos = -1;
    for (int i = 1; i < 1000; i++)
    {
        ans[i] = ans[i] + ans[i - 1];
        if (res < ans[i])
        {
            res = ans[i];
            pos = i;
        }
    }
    cout << pos << " " << res << endl;
}