#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    int n;
    cin >> n;
    int a[n];
    for (int ind = 0; ind < n; ind++) cin >> a[ind];

    ll prefix[n+1];
    prefix[0] = 0;
    for (int i = 0; i < n; i++) {
        prefix[i+1] = prefix[i];
        prefix[i+1] += a[i];
    }

    int largestGroup;
    bool done = false;
    for (int groupSize = n; groupSize >= 0; groupSize--) {
        for (int pos = 0; pos <= n - groupSize; pos++) {
            ll sum = prefix[pos+groupSize] - prefix[pos];
            if (sum % 7 == 0) {
                largestGroup = max(largestGroup, groupSize);
                done = true;
                break;
            }
        }
        if (done) break;
    }
    cout << largestGroup << endl;
}