#include <bits/stdc++.h>
using namespace std;

bool matching(char a, char b)
{
    if (a == '{' && b == '}')
    {
        return true;
    }
    else if (a == '(' && b == ')')
    {
        return true;
    }
    else if (a == '[' && b == ']')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string a = "{{}}[";
    stack<char> s;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '{' || a[i] == '(' || a[i] == '[')
        {
            s.push(a[i]);
        }
        else if (a[i] == ')' || a[i] == '}' || a[i] == ']')
        {
            if (s.size() == 0)
            {
                cout << "Not Balanced\n";
                return 1;
            }
            if (matching(s.top(), a[i]))
            {
                s.pop();
            }
            else
            {
                cout << "Not Balanced\n";
                return 1;
            }
        }
    }
    if (s.size())
    {
        cout << "Not Balanced\n";
    }
    else
    {
        cout << "Balanced\n";
    }
}