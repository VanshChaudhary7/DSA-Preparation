#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N=";
    cin >> n;
    int counter = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j <= i; j++) {
                cout << counter << " ";
                counter++;
            }
        } else {
            for (int j = i; j >= 1; j--) {
                cout << counter + j - 1<<" ";
            }
            counter += i;
        }
        cout << endl;
    }

    return 0;
}