#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int ind = 0; ind < n; ind++) cin >> a[ind];

    int prefix[n+1];
    prefix[0] = 0;
    for (int i = 0; i < n; i++) {
        prefix[i+1] = prefix[i] + a[i];
    }
    for (int j = 0; j <= n; j++) cout << prefix[j] << " ";
}