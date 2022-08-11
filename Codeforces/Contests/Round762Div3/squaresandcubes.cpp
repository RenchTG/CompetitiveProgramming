#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (int(cbrt(i)) == cbrt(i)) {
                count++;
            }
            else if (int(sqrt(i)) == sqrt(i)) {
                count++;
            }
        }
        cout << count << endl;
    }
}