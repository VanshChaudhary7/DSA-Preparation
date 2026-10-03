#include <bits/stdc++.h>

#include <iostream>
using namespace std;
long long Gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return Gcd(b, a % b);
}
long long GcdArray(vector<long long>& arr, int n) {
    if (n == 1)
        return arr[0];
    return Gcd(arr[n - 1], GcdArray(arr, n - 1));
}
int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (auto& x : arr)
        cin >> x;
    cout << GcdArray(arr, n) << endl;
    return 0;
}