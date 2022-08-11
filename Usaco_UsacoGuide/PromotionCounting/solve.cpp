#include <iostream>
using namespace std;

int main()
{
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
	int bb, ab, bs, as, bg, ag, bp, ap, bTs, sTg, gTp;
    cin >> bb >> ab >> bs >> as >> bg >> ag >> bp >> ap;
    gTp = ap - bp;
    ag += gTp;
    sTg = ag - bg;
    as += sTg;
    bTs = as - bs;
    cout << bTs << endl << sTg << endl << gTp << endl;
}   