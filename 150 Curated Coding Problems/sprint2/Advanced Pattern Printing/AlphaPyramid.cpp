#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N=";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++)
            cout << " ";
        for (int j = 0; j < i; j++) {
            cout << char('A' + j);
        }
        for (int j = i - 2; j >= 0; j--) {
            cout << char('A' + j);
        }
        cout << endl;
    }

    return 0;
}