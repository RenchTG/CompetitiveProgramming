#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int ind = 0; ind < n; ind++)
    {
        cin >> a[ind];
    }
    int goodScore = a[k];
    bool solved = false;
    sort(a, a+n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == goodScore && goodScore > 0)
        {
            cout << n - i;
            solved = true;
            break;
        }
    }
    if (solved != true)
    {
        cout << 0;
    }
}