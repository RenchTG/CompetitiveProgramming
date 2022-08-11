#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int n;
vector<pair<string, string>> names;
map<string, int> nick;

bool search(int pos)
{
    string one = names[pos].first, two = names[pos].second;
    if (pos == n-1) {
        if (nick[one] == 1 || nick[two] == 1) return true;
        else return false;
    }

    bool a = false, b = false;
    if (nick[one] == 1) {
        nick[one]++;
        a = search(pos+1);
        nick[one]--;
    }
    if (nick[two] == 1) {
        nick[two]++;
        b = search(pos+1);
        nick[two]--;
    }
    return a || b;

}

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
    if (search(0)) cout << "Yes" << endl;
    else cout << "No" << endl;
}