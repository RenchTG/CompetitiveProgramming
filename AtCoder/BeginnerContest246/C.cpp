#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long k, x;
    cin >> k >> x;
    long long a[n];
    for (int ind = 0; ind < n; ind++) cin >> a[ind];

    long long sum = 0;
    bool dont = false;

    if (k == 0 || x == 0) {
        for (int i = 0; i < n; i++) sum += a[i];
    }
    else {  
        for (int i = 0; i < n; i++) {
            if (k > 0) {
                while (a[i] >= x) {
                    a[i] -= x;
                    k--;
                    if (k == 0) break;
                }
            }
            sum += a[i];
        }
        if (k == 0 || sum == 0) dont = true;
        if (!dont) {
            sort(a, a+n);
            for (int i = n-1; i >= 0; i--) {
                if (a[i] != 0 && a[i] < x) {
                    sum -= a[i];
                    a[i] = 0;
                    k--;
                    if (k == 0) break;
                }
                else if (a[i] == 0) break;
            }
        }
    }
    
    cout << sum << endl;
}