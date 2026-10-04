#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (auto& x : arr)
        cin >> x;
    for (int mask = 0; mask < (1 << n); mask++) {
        if (mask != 0)
            cout << ", ";
        for (int i = n - 1; i >= 0; i--) {
            cout << ((mask >> i) & 1);
        }
        cout << "={";
        bool first = true;
        for (int i = 0; i < n; i++) {
            if ((mask >> i) & 1) {
                cout << (first ? (first = false, "") : ",") << arr[i];
            }
        }
        cout << "}";
    }
    cout << "\n Total subsets: " << (1 << n) << endl;

    return 0;
}