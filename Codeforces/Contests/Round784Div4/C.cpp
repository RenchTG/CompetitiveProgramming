#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        bool even, pos = true;
        if (a[0] % 2 == 0) even = true;
        else even = false;
        for (int i = 2; i < n; i+=2) {
            if (a[i] % 2 == 0 && even) continue;
            else if (a[i] % 2 != 0 && !even) continue;
            else {
                pos = false;
                break;
            }
        }

        if (a[1] % 2 == 0) even = true;
        else even = false;
        for (int i = 3; i < n; i+=2) {
            if (a[i] % 2 == 0 && even) continue;
            else if (a[i] % 2 != 0 && !even) continue;
            else {
                pos = false;
                break;
            }
        }

        if (pos) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}