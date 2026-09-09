#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N=";
    cin >> n;
    if (n <= 1) {
        cout << "No Prime Factor of this number";
        return 0;
    }
    int isFirst = true;
    while (n > 0 && n % 2 == 0) {
        n /= 2;
        if (!isFirst) {
            cout << "X 2 ";
        } else {
            cout << "2 ";
            isFirst = false;
        }
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            if (isFirst) {
                cout << i << " ";
                isFirst = false;
            } else {
                cout << "X " << i << " ";
            }
            n /= i;
        }
    }
    if (n > 1) {
        if (isFirst)
            cout << n;
        else {
            cout << "X " << n;
        }
    }
    cout << endl;
    return 0;
}