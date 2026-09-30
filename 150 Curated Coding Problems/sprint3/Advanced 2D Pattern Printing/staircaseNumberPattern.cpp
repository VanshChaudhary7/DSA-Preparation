#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N=";
    cin >> n;
    // left Aligined Staircase
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }
    // Right Aligined Staircase
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= 2 * (n - i); space++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}