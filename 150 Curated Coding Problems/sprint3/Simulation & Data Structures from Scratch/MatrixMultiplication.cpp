#include <bits/stdc++.h>

#include <iostream>
using namespace std;
void printMatrix(vector<vector<long long>>& matrix) {
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
}
int main() {
    int n, m, p;
    cin >> n >> m >> p;
    vector<vector<long long>> A(n, vector<long long>(m)), B(m, vector<long long>(p)),
        C(n, vector<long long>(p));
    for (auto& row : A) {
        for (auto& x : row) {
            cin >> x;
        }
    }
    for (auto& row : B) {
        for (auto& x : row) {
            cin >> x;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            long long sum = 0;
            for (int k = 0; k < m; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
    printMatrix(C);
    cout << endl;
    return 0;
}