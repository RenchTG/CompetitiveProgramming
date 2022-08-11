#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    bool lower = false, upper = false;
    unordered_set<char> u;
    for (int i = 0; i < s.length(); i++) {
        u.insert(s[i]);
        if (s[i] >= 'A' && s[i] <= 'Z') upper = true;
        else if (s[i] >= 'a' && s[i] <= 'z') lower = true;
    }

    if (lower && upper && u.size() == s.length()) cout << "Yes" << endl;
    else cout << "No" << endl;
}