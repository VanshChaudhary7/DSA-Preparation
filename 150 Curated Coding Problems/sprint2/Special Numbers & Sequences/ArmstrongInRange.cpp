#include <bits/stdc++.h>

#include <iostream>
using namespace std;
long long digitCount(long long n) {
    int d = 0;
    while (n) {
        n /= 10;
        d++;
    }
    return d;
}
bool ArmCheck(long long n) {
    long long ans = 0, num = n, d = digitCount(n);
    while (num) {
        long long term = 1;
        long long mod = num % 10;
        for (int i = 0; i < d; i++)
            term *= mod;
        num /= 10;
        ans += term;
    }
    if (ans == n)
        return true;
    return false;
}
int main() {
    long long n;
    cout << "N=";
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        if (ArmCheck(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}