#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "N=";
    cin >> n;
    if (n < 0) {
        cout << "Enter a valid input\n";
        return 0;
    }
    long long square = -1, cube = -1;
    for (long long i = 0; i * i <= n; i++) {
        if (i * i == n) {
            square = i;
            break;
        }
    }
    for (long long i = 0; i * i * i <= n; i++) {
        if (i * i * i == n) {
            cube = i;
        }
    }
    if (square != -1)
        cout << "perfect Square " << square << endl;
    else
        cout << "No perfect Square\n";
    if (cube != -1)
        cout << "perfect cube " << cube << endl;
    else
        cout << "No perfect Cube\n";

    return 0;
}