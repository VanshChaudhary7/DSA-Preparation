#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int c = sqrt(a * a + b * b);
            cout << a << " " << b << " " << c << endl;
        }
    }
    return 0;
}