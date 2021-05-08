//if two strings have the exact same frequency of all their characters then they are called anagrams
//of eact other

#include <bits/stdc++.h>
using namespace std;

void check(string s1, string s2)
{
    int init[256] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        init[s1[i]]++;
    }
    {
        for (int i = 0; i < s2.length(); i++)
        {
            init[s2[i]]--;
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if (init[i] != 0)
        {
            cout << "not anagram";
            return;
        }
    }
    cout << "anagram";
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    check(s1, s2);
}