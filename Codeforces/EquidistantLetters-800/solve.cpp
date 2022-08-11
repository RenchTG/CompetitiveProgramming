#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int ind = 0; ind < t; ind++)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cout << s << endl;
    }
}