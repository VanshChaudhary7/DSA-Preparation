#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N=";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input" << endl;
        return 0;
    }
    int count = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}