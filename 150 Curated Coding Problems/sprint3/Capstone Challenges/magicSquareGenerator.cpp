#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int lines = 0;
void printMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << "[";
        for (int j = 0; j < m; j++) {
            if (j != 0)
                cout << ",";
            cout << matrix[i][j];
        }
        cout << "]";
    }
    cout << "]";
    cout << endl;
}
bool validCheck(vector<vector<int>>& matrix, int n) {
    int magicNumber = n * (n * n + 1) / 2;
    // Row check
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        lines++;
        if (sum != magicNumber)
            return false;
    }
    // Col check
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += matrix[i][j];
        }
        lines++;
        if (sum != magicNumber)
            return false;
    }
    // diagonal check
    int left = 0, right = 0;
    for (int i = 0; i < n; i++) {
        left += matrix[i][i];
        right += matrix[i][n - i - 1];
    }
    lines += 2;  // left+right diagonal
    if (left != magicNumber || right != magicNumber)
        return false;
    return true;
}
int main() {
    int n;
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
    if (!validCheck(matrix, n)) {
        return 1;
    }
    printMatrix(matrix);
    cout << "Magic constant=" << n * (n * n + 1) / 2 << " (all " << lines << " lines verified)\n";

    return 0;
}