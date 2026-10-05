#include <bits/stdc++.h>

#include <iostream>
using namespace std;
long long power(long long n, int d) {
    if (d == 1)
        return n;
    if (d % 2 == 1)
        return n * power(n, d - 1);
    long long even = power(n, d / 2);
    return even * even;
}
pair<long long, long long> range(int d) {
    long long start = 1;
    for (int i = 1; i < d; i++) {
        start *= 10;
    }
    return {start, start * 10 - 1};
}
int main() {
    int d;
    cin >> d;
    bool first = true;
    auto [start, end] = range(d);
    for (long long i = start; i <= end; i++) {
        long long sum = 0;
        long long n = i;
        while (n) {
            long long mod = n % 10;
            sum += power(mod, d);
            n /= 10;
        }
        if (sum == i) {
            cout << (first ? (first = false, "") : ", ") << sum;
        }
    }
    if (first)
        cout << "None";
    cout << endl;
    return 0;
}