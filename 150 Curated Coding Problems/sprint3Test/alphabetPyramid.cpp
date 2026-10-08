#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int spaces = n; spaces >= i; spaces--) {
            cout << " ";
        }
        for (int j = 0; j <= i - 1; j++) {
            cout << char(65 + j);
        }
        for (int j = i - 2; j >= 0; j--) {
            cout << char(65 + j);
        }
        cout << endl;
    }

    return 0;
}