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
bool armCheck(long long n) {
    long long ans = 0, num = n, d = digitCount(n);
    while (num) {
        long long term = 1;
        long long mod = num % 10;
        for (int i = 0; i < d; i++)
            term *= mod;
        num /= 10;
        ans += term;
    }
    return ans == n;
}
void findArmstrong(int n, vector<int>& arr) {
    if (n == 0)
        return;
    findArmstrong(n - 1, arr);
    if (armCheck(n))
        arr.push_back(n);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    findArmstrong(n, arr);
    for (int i = 0; i < arr.size(); i++)
        cout << (i == 0 ? "" : " ") << arr[i];
    cout << endl;
    return 0;
}