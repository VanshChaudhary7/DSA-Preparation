#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    //[0 1 2]
    //[3 4 5]
    //[6 7 8]

    int n;
    cout << "Enter the values of N\n";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the Values of the matrix\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int magicNumber = n * (n * n + 1) / 2;
    // diagonal check
    int diagonalSumR = 0, diagonalSumL = 0;
    for (int i = 0; i < n; i++) {
        diagonalSumR += matrix[i][i];
        diagonalSumL += matrix[i][n - i - 1];
    }
    bool check = true;
    for (int i = 0; i < n; i++) {
        int colSum = 0, rowSum = 0;
        for (int j = 0; j < n; j++) {
            colSum += matrix[j][i];
            rowSum += matrix[i][j];
        }
        if (colSum != magicNumber || rowSum != magicNumber) {
            check = false;
            break;
        }
    }
    if (diagonalSumL == magicNumber && diagonalSumR == magicNumber && check) {
        cout << "Valid magic square, constant=" << magicNumber << endl;
    } else {
        cout << "Not a magic square\n";
    }

    return 0;
}