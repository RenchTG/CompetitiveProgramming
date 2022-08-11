#include <iostream>
using namespace std;

int main()
{
    int n, count=0;
    cin >> n;
    int a[n], b[n], w[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; ++i)
    {
        w[i] = b[i] - a[i];
    }

    int sign, newSign, returnTo = 0, lowestNum = 0;
    if (w[0] > 0) { sign = 1; }
    else if (w[0] < 0) { sign = -1; }
    else { sign = 0; }

    for (int i = 1; i < n; ++i)
    {
        
        if (w[i] > 0) { newSign = 1; }
        else if (w[i] < 0) { newSign = -1; }
        else { newSign = 0; }

        if (sign == newSign && abs(w[i]) < abs(w[i-1])) { lowestNum = abs(w[i]); }

        if (sign == 0 && newSign != sign) { returnTo = i; sign = newSign; }
        if ((sign != 0 && sign != newSign) || (sign != 0 && i == n - 1))
        {
            for (int a = returnTo; a <= i; a++)
            {
                if (newSign > 0)
                {
                    w[a] -= lowestNum;
                }
                else if (newSign < 0)
                {
                    w[a] += lowestNum;
                }
            }
            count += lowestNum;
            i = returnTo - 1;
            sign = 0;
        }
    }
    cout << count;
}