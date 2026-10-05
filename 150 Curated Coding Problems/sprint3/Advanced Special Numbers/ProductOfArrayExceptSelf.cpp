#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<long long> suffix(n, 1), prefix(n, 1);
    for (auto& x : arr)
        cin >> x;
    long long product = 1;
    for (int i = 1; i < n; i++) {
        product *= arr[i - 1];
        prefix[i] = product;
    }
    product = 1;
    for (int i = n - 2; i >= 0; i--) {
        product *= arr[i + 1];
        suffix[i] = product;
    }
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << (i == 0 ? "" : ",") << prefix[i] * suffix[i];
    }
    cout << "]\n";
    return 0;
}