#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int n;
vector<long long> arr, curr;
vector<bool> used;
bool first = true;
void per(int k) {
    if (k >= n) {
        cout << (first ? (first = false, "") : " ");
        cout << "[";
        for (int i = 0; i < n; i++) {
            cout << (i == 0 ? "" : ",") << curr[i];
        }
        cout << "]";
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            curr.push_back(arr[i]);
            used[i] = true;
            per(k + 1);
            used[i] = false;
            curr.pop_back();
        }
    }
}
int main() {
    cin >> n;
    arr.resize(n);
    for (auto& x : arr)
        cin >> x;
    used.assign(n, false);
    per(0);
    cout << endl;
    return 0;
}