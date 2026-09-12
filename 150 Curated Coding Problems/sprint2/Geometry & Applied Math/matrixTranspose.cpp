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
    int n, m;
    cout << "Enter the values of N and M\n";
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter the Values of the matrix\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    if (n == m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(i<j)
                {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        }
        printMatrix(matrix);
        return 0;
    }

    vector<vector<int>> temp(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            temp[i][j] = matrix[j][i];
        }
    }
    printMatrix(temp);
    return 0;
}
