#include <bits/stdc++.h>
using namespace std;

void lps(string pattern, int arr[])
{
    arr[0] = 0;
    int len = 0;
    int i = 1;
    while (i < pattern.length())
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            arr[i] = len;
            i++;
        }
        else
        {
            if (len == 0)
            {
                arr[i] = 0;
                i++;
            }
            else
            {
                len = arr[len - 1];
            }
        }
    }
}

void kmp(string text, string pattern)
{
    int arr[pattern.length()];
    lps(pattern, arr);
    int i = 0;
    int j = 0;
    while (i < text.length())
    {
        if (text[i] == pattern[j])
        {
            i++;
            j++;
        }
        if (j == pattern.length())
        {
            cout << (i - j) << " ";
            j = arr[j - 1];
        }
        else if (i < text.length() && pattern[j] != text[i])
        {
            if (j == 0)
            {
                i++;
            }
            else
            {
                j = arr[j - 1];
            }
        }
    }
}

int main()
{
    string text;
    string pattern;
    cin >> text >> pattern;
    kmp(text, pattern);
}