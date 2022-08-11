#include <iostream>
#include <vector>
using namespace std;

vector<int> permutation; int n = 3; bool chosen[3];

void search()
{
    if (permutation.size() == n) {
        for (int z : permutation) {
            cout << z << " ";
        }
        cout << endl;
    } else {
        for (int i = 0; i < n; i++) {
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main()
{
    search();
}