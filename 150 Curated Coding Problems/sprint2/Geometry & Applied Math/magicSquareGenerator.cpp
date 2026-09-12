#include <bits/stdc++.h>

#include <iostream>
using namespace std;
void printMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << "[";
        for (int j = 0; j < m; j++) {
            if (j != 0)
                cout << ",";
            cout << matrix[i][j] << " ";
        }
        cout << "]";
    }
    cout << "]";
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the value of n\n";
    cin >> n;
    if (n % 2 == 0) {
        cout << "This works for only odd number\n";
        return 0;
    }
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int row = 0, col = n / 2;
    for (int num = 1; num <= n * n; num++) {
        matrix[row][col] = num;
        int newRow = (row - 1 + n) % n;
        int newCol = (col + 1) % n;
        if (matrix[newRow][newCol] != 0) {
            newRow = (row + 1) % n;
            newCol = col;
        }
        row = newRow;
        col = newCol;
    }
    printMatrix(matrix);

    return 0;
}