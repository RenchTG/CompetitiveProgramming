#include <iostream>
#include <string>
using namespace std;

int n;

string solve(int x) {
    if (x == 1) return "1";
    string s = solve(x-1);
    return s + " " + to_string(x) + " " + s;
}

int main()
{
    cin >> n;
    cout << solve(n);
}