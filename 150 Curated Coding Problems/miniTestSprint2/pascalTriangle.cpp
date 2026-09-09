#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N=";
    cin >> n;
    if (n == 1) {
        cout << "1\n";
        return 0;
    }
    vector<vector<int>> arr(n, vector<int>(n));
    arr[0][0] = 1;
    arr[1][0] = 1;
    arr[1][1] = 1;
    for (int i = 2; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1;
                continue;
            }
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}