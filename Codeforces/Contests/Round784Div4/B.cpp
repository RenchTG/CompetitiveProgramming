#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a,a+n);
        bool done = false;
        for (int i = 0; i < n; i++) {
            int num = a[i], cnt = 0;
            while (a[i] == num) {
                i++;
                cnt++;
            }
            i--;
            if (cnt >= 3) {
                cout << num << endl;
                done = true;
                break;
            }
        }
        if (!done) cout << -1 << endl;
    }
}