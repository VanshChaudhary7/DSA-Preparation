#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto& x : arr)
        cin >> x;
    int count = 0, l = 0, maxHeads = 0;
    for (int r = 0; r < n; r++) {
        if (arr[r] == 0)
            count = 0;
        else count++;
        maxHeads = max(maxHeads, count);
    }
    cout << maxHeads << endl;

    return 0;
}