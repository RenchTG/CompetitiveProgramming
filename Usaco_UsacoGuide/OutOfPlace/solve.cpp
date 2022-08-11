#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);
    int n; cin >> n;
    int a[n], sorted[n];
    for (int ind = 0; ind < n; ind++) {cin >> a[ind]; sorted[ind] = a[ind];}
    sort(sorted, sorted+n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != sorted[i]) {
            count++;
        }
    }
    cout << count - 1 << endl;
}