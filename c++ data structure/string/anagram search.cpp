#include <bits/stdc++.h>
using namespace std;

bool check(int checkPattern[], int checkText[])
{
    for (int i = 0; i < 256; i++)
    {
        if (checkPattern[i] != checkText[i])
        {
            return false;
        }
    }
    return true;
}

void solve(string text, string pattern)
{
    int checkText[256] = {0};
    int checkPattern[256] = {0};

    for (int i = 0; i < pattern.length(); i++)
    {
        checkPattern[pattern[i]]++;
        checkText[text[i]]++;
    }

    for (int i = pattern.length(); i < text.length(); i++)
    {
        if (check(checkPattern, checkText))
        {
            cout << "YES";
            return;
        }
        checkText[text[i - pattern.length()]]--;
        checkText[text[i]]++;
    }
    cout << "No";
}

int main()
{
    string text, pattern;
    cin >> text >> pattern;
    solve(text, pattern);
}