#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool adj1 = false, adj0 = false, pos = true;
        for (int i = 0; i < int(s.length())-1; i++) {
            if (s[i] == s[i+1] && s[i] == '0') {
                adj0 = true;
                if (adj1) pos = false;
            }
            else if (s[i] == s[i+1] && s[i] == '1') adj1 = true;
        }

        if (!pos && adj0 && adj1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}