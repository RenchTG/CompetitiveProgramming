#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int ind = 0; ind < n; ind++) a[ind] = 0;

    for (int i = 0; i < k; i++) {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; j++) {
            a[j]++;
        }
    }
    sort(a,a+n);
    cout << a[n/2] << endl;
}