#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> Sum(n + 1, 0);
    for (int d = 1; d <= n / 2; d++) {
        for (int m = 2 * d; m <= n; m += d)
            Sum[m] += d;
    }
    bool first = true;
    for (int k = 1; k <= n; k++) {
        if (k == Sum[k])
            cout << (first ? (first = false, "") : ", ") << k;
    }
    if (first)
        cout << "None";
    cout << endl;
    return 0;
}