#include <iostream>
#include <string>
using namespace std;

int main()
{
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);
    string s;
    cin >> s;
    int count = 0;
    for (char x = 'A'; x < 'Z'; x++) {
        for (char y = x+1; y <= 'Z'; y++) {
            bool seen[4] = {false, false, false, false};
            int spot = 0;
            for (int i = 0; i < int(s.length()); i++) {
                if (s[i] == x) {
                    seen[spot] = true;
                    spot++;
                }
                else if (s[i] == y) spot++;
                if (spot == 4) break;
            }
            if (seen[0] != seen[1] && seen[1] != seen[2] && seen[2] != seen[3]) {
                count++;
            }
        }
    }
    cout << count << endl;
}