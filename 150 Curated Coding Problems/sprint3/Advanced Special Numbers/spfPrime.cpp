#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> spf(n + 1, -1);
    for (int i = 2; i <= n; i++) {
        if (spf[i] == -1) {
            spf[i] = i;
            for (int k = i * 2; k <= n; k += i) {
                if (spf[k] == -1)
                    spf[k] = i;
            }
        }
    }
    cout << "SPF[2..." << n << "]: ";
    for (int i = 2; i <= n; i++)
        cout << (i == 2 ? "" : " ") << spf[i];
    cout << "\nFactors of " << x << ": ";
    int fac = x;
    while (fac > 1) {
        if (fac != x)
            cout << " x ";
        cout << spf[fac];
        fac /= spf[fac];
    }
    cout << endl;
    return 0;
}