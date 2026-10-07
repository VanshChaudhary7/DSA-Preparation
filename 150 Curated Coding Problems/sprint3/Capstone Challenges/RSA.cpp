#include <bits/stdc++.h>

#include <iostream>
using namespace std;
long long extendedGcd(long long a, long long b, long long& x, long long& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long gcd = extendedGcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}
long long modPow(long long base, long long exp, long long mod) {
    long long result = 1 % mod;
    base %= mod;
    while (exp > 0) {
        if (exp & 1)
            result = result*base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}
int main() {
    long long p, q, e, msg;
    cin >> p >> q >> e >> msg;
    long long N = p * q, phi = (p - 1) * (q - 1), x, y;
    long long g = extendedGcd(e, phi, x, y);
    long long d = ((x % phi) + phi) % phi;
    if (g != 1) {
        cout << "Invalid e: gcd(e, φ(N)) must be 1\n";
        return 1;
    }
    // encryption
    long long cipher = modPow(msg, e, N);
    long long decrypt = modPow(cipher, d, N);

    cout << "N=" << N << ", ";
    cout << "∅(N)=" << phi << ", d=" << d << ", ";
    cout << "Encrypted=" << cipher << ", Decrypted=" << decrypt << endl;

    return 0;
}