#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    freopen("badmilk.in", "r", stdin);
    freopen("badmilk.out", "w", stdout);
    int N, M, D, S;
    cin >> N >> M >> D >> S;
    vector<tuple<int, int, int>> cows;
    for (int ind = 0; ind < D; ind++) {
        int a, b, c;
        cin >> a >> b >> c;
        cows.push_back(make_tuple(a, b, c));
    }
    vector<pair<int, int>> sick;
    for (int ind = 0; ind < S; ind++) {
        int a, b;
        cin >> a >> b;
        sick.push_back(make_pair(a, b));
    }
    unordered_set<int> u, v;
    bool first = true;
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < D; j++) {
            if (first) {
                if (get<0>(cows[j]) == sick[0].first) {
                    u.insert(get<1>(cows[j])); 
                }
            }
            else if (get<0>(cows[j]) == sick[i].first) {
                v.insert(get<1>(cows[j]));
            }
        }
        first = false;
    }
    for (int x = 1; x <= 100; x++) {
        if (u.count(x) == 1 && v.count(x) != 1) {
            u.erase(x);
        }
    }

    //Now you have list of all possible milks it could be, find the max
    int count = 0, maxCount = 0;
    for (int y : u) {
        for (int l = 1; l <= 50; l++) {
            for (int q = 0; q < D; q++) {
                if (get<0>(cows[q]) == l && get<1>(cows[q]) == y) {
                    count++;
                }
            }
        }
        maxCount = max(maxCount, count);
        count = 0;
    }
    cout << maxCount << endl;
}