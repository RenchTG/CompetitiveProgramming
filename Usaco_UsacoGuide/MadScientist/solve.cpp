#include <iostream>
#include <string>
using namespace std;

int main()
{
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    int n; cin >> n;
    string a, b;
    cin >> a >> b;
    int count = 0, mism = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] != a[i]) {
            mism++;
        }
        else {
            if (mism > 0) {
                mism = 0;
                count++;
            }
        }
    }
    if (mism > 0) {count++;}
    cout << count << endl;
}