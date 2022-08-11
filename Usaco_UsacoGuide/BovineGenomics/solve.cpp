#include <iostream>
#include <string>
using namespace std;

int main()
{
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    string spotted[n];
    string notSpotted[n];
    for (int ind = 0; ind < n; ind++) {
        cin >> spotted[ind];
    }
    for (int ind2 = 0; ind2 < n; ind2++) {
        cin >> notSpotted[ind2];
    }
    
    int count = 0;
    for (int i = 0; i < m; i++) {
        bool a = false, t = false, c = false, g = false;
        //cout << "SPOTTED: " << endl << "CHECKING: " << endl;
        for (int j = 0; j < n; j++) {
            //cout << spotted[j][i] << " ";
            switch(spotted[j][i]) {
                case 'A': a = true; break;
                case 'G': g = true; break;
                case 'T': t = true; break;
                case 'C': c = true; break;
            }
        }
        //cout << endl << "BOOLS: " << a << " " << t << " " << c << " " << g << endl;
        //cout << endl << "NOT SPOTTED: " << endl << "CHECKING: " << endl;
        bool good = true;
        for (int k = 0; k < n; k++) {
            //cout << notSpotted[k][i] << " ";
            if (notSpotted[k][i] == 'A' && a) {
                good = false;
                break;
            }
            else if (notSpotted[k][i] == 'G' && g) {
                good = false;
                break;
            }
            else if (notSpotted[k][i] == 'T' && t) {
                good = false;
                break;
            }
            else if (notSpotted[k][i] == 'C' && c) {
                good = false;
                break;
            }
        }
        //cout << endl;
        if (good) {
            count++;
            //cout << endl << "THIS ONE!!" << endl;
        }
    }
    cout << count << endl;
}