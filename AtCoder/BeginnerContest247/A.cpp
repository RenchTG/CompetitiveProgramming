#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s[3] = s[2];
    s[2] = s[1];
    s[1] = s[0];
    s[0] = 48;
    cout << s << endl;
}