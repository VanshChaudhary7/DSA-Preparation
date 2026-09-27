#include <bits/stdc++.h>

#include <iostream>
using namespace std;
void printMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << "[";
        for (int j = 0; j < n; j++) {
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
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
        }
    }
    // swapping from the right to left to reverse
    for (auto& row : matrix) {
        reverse(row.begin(),row.end());
    }
    printMatrix(matrix);

    return 0;
}