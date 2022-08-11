#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        if (s.length() % 2 == 0) {
            int halfway = s.length() / 2;
            if (s.substr(0, halfway) == s.substr(halfway)) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "NO" << endl;
        }
    }
}