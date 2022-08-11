#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        int l = 0, r = n-1;
        int lSum = a[l], rSum = a[r];
        int maxEaten = 0;
        while (l < r) {
            if (lSum == rSum) maxEaten = max(maxEaten, l+(n-1-r));
            if (lSum < rSum) l++;
            else if (rSum < lSum) r--;
            else l++;
            lSum += a[l];
            rSum += a[r];
        }
        cout << maxEaten << endl;
    }
}