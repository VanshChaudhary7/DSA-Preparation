#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N=";
    cin >> n;
    if (n < 1) {
        cout << "Invalid input\n";
        return 0;
    }

    vector<vector<int>> ans(n, vector<int>(n));
    ans[0] = {1};
    if (n == 1) {
        cout << "1" << endl;
        return 0;
    }
    ans[1] = {1, 1};
    for (int i = 2; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                ans[i][j] = 1;
                continue;
            }
            ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}