#include <bits/stdc++.h>

#include <iostream>
using namespace std;
void print(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
    }
}
void spiralOrder(vector<vector<int>>& matrix) {
    int top = 0, bottom = matrix.size() - 1, left = 0, right = matrix[0].size() - 1;
    int K = 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = K++;
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = K++;
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = K++;
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = K++;
            }
            left++;
        }
    }
}
int main() {
    int n;
    cout << "Enter the N\n";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    spiralOrder(matrix);
    print(matrix);

    return 0;
}