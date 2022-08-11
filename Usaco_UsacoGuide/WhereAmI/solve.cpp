#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int find(int n, string s) {
    unordered_set<string> u;
    for (int k = 1; k <= n; k++) {
        for (int i = 0; i <= n-k; i++) {
            if (u.count(s.substr(i, k)) == 1) {
                break;
            }
            else {
                u.insert(s.substr(i, k));
            }
            if (i == n-k) {
                return k;
            }
        }
    }
    return n;
}

int main() {
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    int n;
    string s;
    cin >> n >> s;
    cout << find(n, s) << endl;
}