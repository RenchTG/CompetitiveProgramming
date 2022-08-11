#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string s[15];
int repeat[26], n, k;
int maxCount = 0;

void search(string a, int pos) {
    for (int i = pos+1; i < n; i++) {
        for (char c : a) {
            for (char x : s[i]) {
                if (x == c && repeat[x-'a'] < k) {
                    int count = 0;
                    for (char z : s[i]) repeat[z-'a']++;
                    for (int f : repeat) if (f == k) count++;
                    maxCount = max(count,maxCount);
                    search(a+s[i],i);
                    for (char d : s[i]) repeat[d-'a']--;
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> s[i];

    for (int i = 0; i < n; i++) {
        string x = s[i];
        for (char c : x) repeat[c-'a']++;
        search(x, i);
        for (char d : x) repeat[d-'a']--;
    }
    cout << maxCount << endl;
}