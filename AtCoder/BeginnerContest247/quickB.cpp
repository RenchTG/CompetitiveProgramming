#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int n;
vector<pair<string, string>> names;
map<string, int> nick;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        nick[a]++;
        nick[b]++;
        names.push_back(make_pair(a,b));
    }
    bool pos = true;
    for (int j = 0; j < n; j++) {
        string a = names[j].first, b = names[j].second;
        if (nick[a] != 1 && nick[b] != 1) {
            pos = false;
            break;
        }
        nick[a]++;
    }
    if (pos) cout << "Yes" << endl;
    else cout << "No" << endl;
}