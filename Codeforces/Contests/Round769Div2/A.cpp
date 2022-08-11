#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int ind = 0; ind < t; ind++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n == 1) { cout << "YES" << endl; }
        else if (n == 2 && s[0] != s[1]) { cout << "YES" << endl; }
        else { cout << "NO" << endl; }
    }
}