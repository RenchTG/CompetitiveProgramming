#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        bool pos = true;
        int i = 0;
        while (i < n)
        {
            while (s[i] == 'W') {
                i++;
                if (i >= n) break;
            }
            if (i >= n) break;
            int len = 0;
            bool seenR = false, seenB = false;
            while (s[i] != 'W') {
                if (s[i] == 'R') seenR = true;
                else if (s[i] == 'B') seenB = true;
                i++; len++;
                if (i >= n) break;
            }
            if (len == 1) pos = false;
            else if ((seenR && !seenB) || (!seenR && seenB)) pos = false;
            if (i >= n) break;
        }
        if (pos) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}