#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N=";
    cin >> n;
    if (n < 1) {
        cout << "Enter the valid input\n";
        return 0;
    }
    cout << "Triangular : ";
    for (long long i = 1; i <= n; i++) {
        cout << i * (i + 1) / 2 << " ";
    }
    cout << " Square : ";
    for (long long i = 1; i <= n; i++) {
        cout << i * i << " ";
    }
    cout << " Pentagonal : ";
    for (long long i = 1; i <= n; i++) {
        cout << i * (3 * i - 1) / 2 << " ";
    }
    cout << endl;

    return 0;
}