#include <bits/stdc++.h>

#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n;
    cout << "Enter the value of n\n";
    cin >> n;
    if (!isPrime(n)) {
        cout << "Not mersenne prime\n";
        return 1;
    }
    bool check = false;
    for (long long i = 2, value = 4; value - 1 <= n; i++, value <<= 1) {
        if (value - 1 == n && isPrime(i)) {
            check = true;
            break;
        }
    }
    if (check)
        cout << "Mersenne Prime\n";
    else
        cout << "Not mersenne prime\n";

    return 0;
}