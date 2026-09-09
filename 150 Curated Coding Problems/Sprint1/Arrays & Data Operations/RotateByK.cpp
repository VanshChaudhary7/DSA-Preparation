#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the Number of Elements in the array ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    cout << "K=";
    cin >> k;
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}