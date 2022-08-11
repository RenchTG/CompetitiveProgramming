#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string outputStr = "";

    for (int index = 0; index < t; index++)
    {
        int n, l, r, k;
        cin >> n >> l >> r >> k;

        int a[n];
        int temp;
        for (int index2 = 0; index2 < n; index2++)
        {
            cin >> temp;
            if (temp <= r && temp >= l) {
                cin >> a[temp];
            }
            cin >> a[index2];
        }

        int output = 0;

        for (int i = 0; i < n; i++) 
        {
            if (a[i] <= r && a[i] >= l && k > 0)
            {
                if (k >= a[i])
                {
                    k -= a[i];
                    output++;
                }
            }
        }

        outputStr += to_string(output) + "\n";
    }

    cout << outputStr;


    return 0;
}   