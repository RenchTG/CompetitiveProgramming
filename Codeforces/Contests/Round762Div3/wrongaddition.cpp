#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        long long a, s;
        cin >> a >> s;
        vector<string> v;
        bool noWork = false;
        while (a != 0 || s != 0) {
            //cout << "A: " << a << " S: " << s << endl;
            if (a % 10 > s % 10) {
                if (s % 100 - a % 10 > 10) {
                    noWork = true;
                    break;
                }
                int b = s % 100 - a % 10;
                a /= 10;
                s /= 100;
                //cout << "ADDED: " << b << endl;
                v.push_back(to_string(b));
            }
            else if (a % 10 < s % 10) {
                int b = s % 10 - a % 10;
                a /= 10;
                s /= 10;
                //cout << "ADDED: " << b << endl;
                v.push_back(to_string(b));
            }
            else if (a % 10 == s % 10) {
                int b = 0;
                a /= 10;
                s /= 10;
                //cout << "ADDED: " << b << endl;
                v.push_back(to_string(b));
            }
            if (a != 0 && s == 0) {
                noWork = true;
                break;
            }
            //cout << "A: " << a << " S: " << s << endl;
        }
        bool seenNonZero = false;
        string ans = "";
        if (noWork) {ans = "-1";}
        for (int i = v.size() - 1; i > -1; i--) {
            if (noWork) {
                ans = "-1";
                break;
            }
            if (v[i] == "0" && seenNonZero == false) {
                continue;
            }
            else if (v[i] != "0" && seenNonZero == false) {
                seenNonZero = true;
                ans += v[i];
            }
            else {
                ans += v[i];
            }
        }
        cout << ans << endl;
    }
}