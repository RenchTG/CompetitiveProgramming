#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
using ll = long long;

unordered_set<ll> first[11], second[11];

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s[n];
        for (int i = 0; i < n; i++) cin >> s[i];

        ll count = 0;
        for (int i = 0; i < n; i++) {
            first[  first[s[i][0]-'a'];
            second[s[i][1]-'a']++;
        }
        for (int z : first) cout << z << " ";
        cout << endl;
        for (int z : second) cout << z << " ";
        cout << endl;
        for (int z : first) if (z != 0) count += ((1+(z-1)) / 2.0) * (z-1);
        for (int z : second) if (z != 0) count += ((1+(z-1)) / 2.0) * (z-1);
        cout << count << endl;
    }
}