#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int ind = 0; ind < t; ind++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int ind2 = 0; ind2 < n; ind2++)
        {
            cin >> a[ind2];
        }
        sort(a, a+n);
        cout << a[n-1] - a[0] << endl;
    }
}