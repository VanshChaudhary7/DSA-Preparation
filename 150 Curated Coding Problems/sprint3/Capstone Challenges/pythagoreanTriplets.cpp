#include <bits/stdc++.h>

#include <iostream>
using namespace std;
long long gcd(long long m, long long n) {
    if (n == 0)
        return m;
    return gcd(n, m % n);
}
int main() {
    long long N;
    cin >> N;
    vector<pair<long long, pair<long long, long long>>> bruteForce, Euclid;
    for (long long a = 1; a <= N; a++) {
        for (long long b = a + 1; b <= N; b++) {
            long long s = a * a + b * b;
            long long c = (long long)(sqrt(s));
            if (c > N)
                break;
            while (c * c > s)
                c--;
            while ((c + 1) * (c + 1) <= s)
                c++;
            if (c * c == s)
                bruteForce.push_back({a, {b, c}});
        }
    }
    for (int m = 2; m * m + 1 <= N; m++) {
        for (int n = 1; n < m; n++) {
            if ((m - n) % 2 == 1 && gcd(m, n) == 1) {
                long long a = m * m - n * n, b = 2 * m * n, c = m * m + n * n;
                long long lo = min(a, b), hi = max(a, b);
                for (long long k = 1; k * c <= N; k++) {
                    Euclid.push_back({lo * k, {hi * k, c * k}});
                }
            }
        }
    }
    sort(bruteForce.begin(), bruteForce.end());
    sort(Euclid.begin(), Euclid.end());
    if (bruteForce != Euclid) {
        cout << "Methods disagree\n";
        return 1;
    }
    bool first = true;
    for (auto it : Euclid) {
        long long a = it.first, b = it.second.first, c = it.second.second;
        cout << (first ? (first = false, "") : ",") << "(" << a << "," << b << "," << c << ")";
    }
    cout << "\nBrute force and Euclid agree: " << bruteForce.size() << " triplets\n";
    return 0;
}