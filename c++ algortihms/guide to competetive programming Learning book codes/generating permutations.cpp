#include<bits/stdc++.h>
using namespace std;

vector<int> permutations;
bool ischecked[3];
void search()
{
    if(permutations.size()==3) {
        for (int i = 0; i < permutations.size(); i++) {
            cout << permutations[i] << " ";
        }
        cout << endl;
    }
    else {
        for (int i = 0; i < 3; i++) {
            if(ischecked[i]) {
                continue;
            }
            ischecked[i] = true;
            permutations.push_back(i);
            search();
            ischecked[i] = false;
            permutations.pop_back();
        }
    }
}

int main()
{
    search();
}