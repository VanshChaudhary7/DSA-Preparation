#include <bits/stdc++.h>

#include <iostream>
using namespace std;
long long power(long long n, long long e) {
    if (e == 0)
        return 1;
    if (e % 2 != 0)
        return n * power(n, e - 1);
    long long valueEven = power(n, e / 2);
    return valueEven * valueEven;
}
int main() {
    long long n, hockeyStickSum = 0, PlaceValueSum = 0;

    cout << "N=";
    cin >> n;
    if (n == 1) {
        cout << "1\n";
        return 0;
    }
    vector<vector<long long>> arr(n, vector<long long>(n));
    arr[0][0] = 1;
    arr[1][0] = 1;
    arr[1][1] = 1;
    for (int i = 2; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1;
                continue;
            }
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Row sums: ";
    for (int i = 0; i < n; i++) {
        long long rowSum = 0;
        for (int j = 0; j <= i; j++) {
            rowSum += arr[i][j];
        }
        cout << (i ? "," : "") << rowSum;
    }
    cout << endl;
    cout << "Hockey stick: ";
    for (int i = 2; i < n - 1; i++) {
        hockeyStickSum += arr[i][2];
        cout << ((i > 2) ? "+" : "") << arr[i][2];
    }
    cout << "="<<hockeyStickSum;
    cout << ((hockeyStickSum == arr[n - 1][3]) ? " (Confirmed)" : " (Failed)");
    cout << endl;
    for (int j = 0; j < n; j++) {
        PlaceValueSum += arr[n - 1][j] * power(10, n - j - 1);
    }
    cout << "Powers of 11: row " << n - 1 << " -> " << PlaceValueSum << "=11^" << n - 1
         << ((PlaceValueSum == power(11, n - 1))
        ? " (Confirmed)"
        : " (Failed)");
    cout << endl;
    return 0;
}