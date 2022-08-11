#include <iostream>
using namespace std;

int main()
{
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int n, m, a, b, tempSum = 0, maxSpeed = 0;
    cin >> n >> m;
    pair<int, int> limit[n], speed[m];
    for (int ind = 0; ind < n; ind++) {cin >> a >> b; tempSum += a; limit[ind] = make_pair(tempSum, b);}
    tempSum = 0;
    for (int ind2 = 0; ind2 < m; ind2++) {cin >> a >> b; tempSum += a; speed[ind2] = make_pair(tempSum, b);}
    int limitSegmentOn = 0, speedSegmentOn = 0;
    for (int i = 1; i <= 100; i++) {
        if (i > limit[limitSegmentOn].first) {limitSegmentOn++;}
        if (i > speed[speedSegmentOn].first) {speedSegmentOn++;}
        if (limit[limitSegmentOn].second < speed[speedSegmentOn].second) {
            maxSpeed = max(maxSpeed, speed[speedSegmentOn].second - limit[limitSegmentOn].second);
        }
    }
    cout << maxSpeed << endl;
}