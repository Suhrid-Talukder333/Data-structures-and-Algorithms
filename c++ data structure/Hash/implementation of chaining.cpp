#include <bits/stdc++.h>
using namespace std;

struct mylist
{
    int bucket;
    list<int> *table;

    mylist(int a)
    {
        bucket = a;
        table = new list<int>[a];
    }

    bool search(int key)
    {
        int i = key % bucket;
        for (auto x : table[i])
        {
            if (x == key)
            {
                return true;
            }
        }
        return false;
    }

    void insert(int key)
    {
        int i = key % bucket;
        table[i].emplace_back(key);
    }

    void remove(int key)
    {
        int i = key % bucket;
        table[i].remove(key);
    }
};

int main()
{
    int n = 5;
    mylist ourList(n);
    ourList.insert(1);
    ourList.insert(2);
    if (ourList.search(1))
    {
        cout << "found\n";
    }
    ourList.remove(1);
    if (ourList.search(1))
    {
        cout << "found\n";
    }
    else
    {
        cout << "Not found\n";
    }
}