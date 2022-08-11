/*
ID: dobrano1
LANG: C++
TASK: gift1
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);

    int NP;
    cin >> NP;
    vector<pair<string, int>> people;
    for (int ind = 0; ind < NP; ind++)
    {
        string name;
        cin >> name;
        people.push_back(make_pair(name, 0));
    }

    for (int ind2 = 0; ind2 < NP; ind2++)
    {
        string name;
        int moneyToGive, peopleToGive;
        cin >> name >> moneyToGive >> peopleToGive;
        if (peopleToGive > 0)
        {
            for (pair<string, int> &p : people)
            {
                if (p.first == name)
                {
                    p.second -= moneyToGive;
                    p.second += (moneyToGive % peopleToGive);
                    for (int ind3 = 0; ind3 < peopleToGive; ind3++)
                    {
                        string personName;
                        cin >> personName;
                        for (pair<string, int> &p : people)
                        {
                            if (p.first == personName)
                            {
                                p.second += (moneyToGive / peopleToGive);
                            }
                        }
                    }
                }
            }
        }
    }

    for (pair<string, int> p : people)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}