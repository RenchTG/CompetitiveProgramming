#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    freopen("photo.in", "r", stdin);
    freopen("photo.out", "w", stdout);
    int n;
    cin >> n;
    int b[n-1];
    for (int ind = 0; ind < n-1; ind++) cin >> b[ind];
    unordered_set<int> u;
    vector<int> a;
    for (int i = 1; i <= b[0]-1; i++) {
        a.push_back(i);
        u.insert(i);
        for (int j = 0; j < n-1; j++) {
            int next = b[j] - a[j];
            if (next >= 1 && next <= n) {
                u.insert(next);
                a.push_back(next);
            }
        }
        if (int(u.size()) == n) {
            break;
        }
        else {
            a.clear();
            u.clear();
        }
    }
    for (int ind2 = 0; ind2 < int(a.size()); ind2++) {
        if (ind2 == int(a.size()-1)) {
            cout << a[ind2] << endl; 
            break;
        }
        cout << a[ind2] << " ";
    }
}