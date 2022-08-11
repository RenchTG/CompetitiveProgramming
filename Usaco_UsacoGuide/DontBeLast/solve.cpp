#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);
    int n; cin >> n;
    vector<pair<int, string>> cows;
    cows.push_back(make_pair(0, "Bessie"));
    cows.push_back(make_pair(0, "Elsie"));
    cows.push_back(make_pair(0, "Daisy"));
    cows.push_back(make_pair(0, "Gertie"));
    cows.push_back(make_pair(0, "Annabelle"));
    cows.push_back(make_pair(0, "Maggie"));
    cows.push_back(make_pair(0, "Henrietta"));

    for (int i = 0; i < n; i++) {
        string name;
        int amount;
        cin >> name >> amount;
        for (int j = 0; j < 7; j++) {
            if (name == cows[j].second) {
                cows[j].first += amount;
            }
        }
    }

    sort(cows.begin(), cows.end());
    int spot = 0;
    while (cows[spot+1].first == cows[0].first) {spot++;}
    if (cows[spot+1].first == cows[spot+2].first) {cout << "Tie" << endl;}
    else {cout << cows[spot+1].second << endl;}
}