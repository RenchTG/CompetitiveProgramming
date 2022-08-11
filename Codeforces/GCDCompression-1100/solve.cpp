#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[2*n];
        for (int i = 0; i < 2*n; i++) cin >> a[i];

        bool rem1 = false, rem2 = false;
        for (int i = 0; i < 2*n; i++) {
            if (a[i] != 0) {
                if (i == (2*n)-2 && !rem1 && !rem2) break;
                else if (i == (2*n)-1 && !rem2) break;
                else if (a[i] % 2 != 0) {
                    int past = i;
                    i++;
                    while (a[i] % 2 == 0 || a[i] == 0) i++;
                    if (i < 2*n) {
                        if (i == 2*n-1 && !rem1 && !rem2) {}
                        else cout << past+1 << " " << i+1 << endl;
                        a[past] = 0;
                        a[i] = 0;
                    }
                    else {
                        if (!rem1) {
                            a[i] = 0;
                            rem1 = true;
                        }
                        else if (!rem2) {
                            a[i] = 0;
                            rem2 = true;
                        }
                    }
                    i = past;
                }
                else {
                    int past = i;
                    i++;
                    while (a[i] % 2 != 0 || a[i] == 0) i++;
                    if (i < 2*n) {
                        if (i == 2*n-1 && !rem1 && !rem2) {}
                        else cout << past+1 << " " << i+1 << endl;
                        a[past] = 0;
                        a[i] = 0;
                    }
                    else {
                        if (!rem1) {
                            a[i] = 0;
                            rem1 = true;
                        }
                        else if (!rem2) {
                            a[i] = 0;
                            rem2 = true;
                        }
                    }
                    i = past;
                }
            }
        }
    }
}