#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    bool good = false;
    for (int i = '0'; i <= '9'; i++) {
        for (int j = 0; j < int(s.length()); j++) {
            if (s[j] == i) good = true;
        }
        if (!good) {
            cout << i-'0' << endl;
            break;
        }
        good = false;
    }
}