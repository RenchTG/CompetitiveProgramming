/*
ID: dobrano1
LANG: C++
PROG: beads
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    freopen("beads.in", "r", stdin);
    freopen("beads.out", "w", stdout);

    int n;
    cin >> n;
    string s;
    cin >> s;

    bool hasR = false, hasB = false;
    for (int x = 0; x < n; x++) {
        if (s[x] == 'b') {hasB = true;}
        else if (s[x] == 'r') {hasR = true;}
    }
    if (!hasR || !hasB) {cout << n << endl; return 0;}

    int firstSet=0, secondSet=0, sum=0, j=0;
    bool onFirstSet = true, done = false;
    char lead = 'w';
    while (lead == 'w') { lead = s[j++]; }
    int goBackTo = j-1;
    for (int i = j-1; i < n; i++) {
        if (s[i] == lead || s[i] == 'w') {
            if (onFirstSet) { firstSet++; }
            else { secondSet++; }
        }
        else {
            sum = max(sum, firstSet+secondSet);
            lead = s[i];
            if (done) {break;}
            if (!onFirstSet) {
                i = goBackTo-1;
                firstSet = 0;
                secondSet = 0;
                if (lead == 'b') {lead = 'r';}
                else {lead = 'b';}
            }
            else {
                goBackTo = i;
                if (s[goBackTo-1] == 'w') {
                    goBackTo--;
                    if (s[goBackTo-1] == 'w') {
                        while (s[goBackTo-1] == 'w') {
                            goBackTo--;
                        }
                        goBackTo++;
                    }
                }
                secondSet++;
            }
            onFirstSet = !onFirstSet;
        } 
        if (i == n-1) {
            done = true;
            i = -1;
        }
    }
    cout << sum << endl;
}