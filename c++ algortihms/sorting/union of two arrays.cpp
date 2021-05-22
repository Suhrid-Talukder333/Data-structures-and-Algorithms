#include <bits/stdc++.h>
using namespace std;

void doUnion(int a[], int b[], int size1, int size2)
{
    int i = 0;
    int j = 0;
    vector<int> ans;

    while (i < size1 && j < size2)
    {
        if (a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        else if (b[j] == b[j - 1])
        {
            j++;
            continue;
        }
        else if (a[i] == b[j])
        {
            ans.emplace_back(a[i]);
            i++, j++;
        }
        else
        {
            if (a[i] < b[j])
            {
                ans.emplace_back(a[i]);
                i++;
            }
            else
            {
                ans.emplace_back(b[j]);
                j++;
            }
        }
    }

    while (i < size1)
    {
        if (a[i] == a[i - 1])
        {
            i++;
        }
        else
        {
            ans.emplace_back(a[i]);
            i++;
        }
    }

    while (j < size2)
    {
        if (b[j] == b[j - 1])
        {
            j++;
        }
        else
        {
            ans.emplace_back(b[j]);
            j++;
        }
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
}

int main()
{
    int a[5] = {1, 1, 1, 1, 1};
    int b[5] = {1, 1, 1, 1, 1};
    doUnion(a, b, 5, 5);
}