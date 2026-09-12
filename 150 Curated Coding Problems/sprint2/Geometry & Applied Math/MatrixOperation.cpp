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
}

int main() {
    int n, m, k;
    cout << "Enter the Value of n and m\n";
    cin >> n >> m;
    if(n<1||m<1){
      cout<<"Enter some valid value of n and m"<<endl;
      return 0;
    }
    cout << "Enter the value of K for scalar multiplication\n";
    cin >> k;
    vector<vector<int>> matA(n, vector<int>(m)), matB(n, vector<int>(n));
    cout << "A=";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matA[i][j];
        }
    }
    cout << "\nB=";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matB[i][j];
        }
    }
    vector<vector<int>> addAB(n, vector<int>(m)), subAB(n, vector<int>(m)),
        scalarAB(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            addAB[i][j] = matA[i][j] + matB[i][j];
            subAB[i][j] = matA[i][j] - matB[i][j];
            scalarAB[i][j] = k * matA[i][j];
        }
    }
    cout << "A+B=";
    printMatrix(addAB);
    cout << ", A-B=";
    printMatrix(subAB);
    cout << ", 2XA=";
    printMatrix(scalarAB);
    cout << endl;
    return 0;
}