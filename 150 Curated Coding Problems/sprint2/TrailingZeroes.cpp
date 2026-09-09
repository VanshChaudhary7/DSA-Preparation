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
    int factor = 5, ans = 0;
    while ((n / factor) != 0) {
        ans += n / factor;
        factor *= 5;
    }
    cout << ans << endl;

    return 0;
}