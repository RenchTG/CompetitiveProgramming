#include <iostream>
#include <cmath>
using namespace std;

bool isPalindrome(int x) {
    int digits = 0;
    double num = x;
    while (num > 9) {
        num /= 10.0;
        digits++;
    }
    int flip = 0;
    int placeX = x;
    while (digits >= 0) {
        int dig = placeX % 10;
        placeX /= 10;
        flip += dig * pow(10, digits);
        digits--;
    }
    if (flip == x) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;

    if (isPalindrome(n)) {
        cout << n << " is a palindrome";
    }
    else {
        cout << n << " is NOT a palindrome";
    }
    return 0;
}