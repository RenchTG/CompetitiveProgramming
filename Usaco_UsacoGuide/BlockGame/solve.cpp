#include <iostream>
#include <string>
using namespace std;

int main()
{
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);
    int n, aCount[26], bCount[26], counts[26];
    cin >> n;
    for (int ind = 0; ind < 26; ind++) {counts[ind] = 0; aCount[ind] = 0; bCount[ind] = 0;}
    for (int ind = 0; ind < n; ind++) {
        string a, b; cin >> a >> b;
        for (char c : a) {
            aCount[c - 97]++;
        }
        for (char d : b) {
            bCount[d - 97]++;
        }
        for (int i = 0; i < 26; i++) {
            counts[i] += max(aCount[i], bCount[i]);
        }
        for (int ind2 = 0; ind2 < 26; ind2++) {aCount[ind2] = 0; bCount[ind2] = 0;}
    }
    for (int ind = 0; ind < 26; ind++) {cout << counts[ind] << endl;}
}