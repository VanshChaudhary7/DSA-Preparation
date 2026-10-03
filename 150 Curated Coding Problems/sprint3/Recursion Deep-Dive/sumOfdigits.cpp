#include <bits/stdc++.h>

#include <iostream>
using namespace std;
long long digitSum(long long n) {
    if (n < 10)
        return n;
    return n % 10 + digitSum(n / 10);
}
int main() {
    long long n;
    cin >> n;
    cout << digitSum(n) << endl;

    return 0;
}