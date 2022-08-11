#include <iostream>
#include <math.h>
using namespace std;

long long func(long long a, long long b) {
    return (pow(a,3))+((pow(a,2))*b)+((pow(b,2))*a)+(pow(b,3));
}

int main()
{
    long long n;
    cin >> n;
    long long minNum = 1e10;
    for (long long i = 0; i < n; i++) {
        //binary search for closest j value
        long long lowerBound = 0, upperBound = 1e5, j;
        while (upperBound - lowerBound != 1 && upperBound - lowerBound != 0) {
            j = (upperBound-lowerBound) / 2 + lowerBound;
            if (func(i, j) >= n) upperBound = j;
            else if (func(i, j) < n) lowerBound = j+1;
        }
        minNum = min(minNum, func(i,j+1));
    }
    cout << minNum;
}