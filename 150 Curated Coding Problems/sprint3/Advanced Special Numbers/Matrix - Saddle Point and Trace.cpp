#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int minInRow(int i, vector<vector<int>>& matrix) {
    int minValue = 1e9, minj;
    for (int j = 0; j < matrix.size(); j++) {
        if (matrix[i][j] < minValue) {
            minValue = matrix[i][j];
            minj = j;
        }
    }
    return minj;
}
int maxInCol(int j, vector<vector<int>>& matrix) {
    int maxValue = -1e9, maxI;
    for (int i = 0; i < matrix.size(); i++) {
        if (matrix[i][j] > maxValue) {
            maxValue = matrix[i][j];
            maxI = i;
        }
    }
    return maxI;
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (auto& row : matrix) {
        for (auto& x : row) {
            cin >> x;
        }
    }
    // diagonal sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    for (int i = 0; i < n; i++) {
        int j = minInRow(i, matrix);
        if (i == maxInCol(j, matrix)) {
            cout << "Trace=" << suvm << ", Saddle point at (" << i << "," << j
                 << ")=" << matrix[i][j] << endl;
            return 0;
        }
    }
    cout << "Trace=" << sum << ", No saddle point\n";

    return 0;
}