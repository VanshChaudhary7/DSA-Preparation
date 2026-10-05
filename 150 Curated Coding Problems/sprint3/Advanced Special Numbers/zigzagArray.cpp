#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto& x : arr)
        cin >> x;
    for (int i = 1; i < n; i++) {
        if ((i - 1) % 2 == 0) {
            if (arr[i - 1] > arr[i])
                swap(arr[i], arr[i - 1]);
        } else {
            if (arr[i - 1] < arr[i])
                swap(arr[i], arr[i - 1]);
        }
    }
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << (i == 0 ? "" : ",") << arr[i];
    }
    cout << "]\n";

    return 0;
}