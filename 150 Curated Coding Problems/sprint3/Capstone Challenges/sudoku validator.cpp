#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
    int grid[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> grid[i][j];
        }
    }
    // row check
    for (int i = 0; i < 9; i++) {
        vector<bool> seen(10, false);
        for (int j = 0; j < 9; j++) {
            if (grid[i][j] == 0)
                continue;
            if (seen[grid[i][j]]) {
                cout << "Invalid - row " << i << " has duplicate " << grid[i][j] << endl;
                return 0;
            } else {
                seen[grid[i][j]] = true;
            }
        }
    }
    // column check
    for (int j = 0; j < 9; j++) {
        vector<bool> seen(10, false);
        for (int i = 0; i < 9; i++) {
            if (grid[i][j] == 0)
                continue;
            if (seen[grid[i][j]]) {
                cout << "Invalid - column " << j << " has duplicate " << grid[i][j] << endl;
                return 0;
            } else {
                seen[grid[i][j]] = true;
            }
        }
    }
    //box check
    for (int box = 0; box < 9; box++) {
        int StartRow = (box / 3) * 3;
        int startCol = (box % 3) * 3;
        vector<bool> seen(10, false);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int row = StartRow + i;
                int col = startCol + j;
                if (grid[row][col] == 0)
                    continue;

                if (seen[grid[row][col]]) {
                    cout << "Invalid - box " << box << " has duplicate " << grid[i][j] << endl;
                    return 0;
                } else {
                    seen[grid[row][col]] = true;
                }
            }
        }
    }
    cout << "Valid\n";

    return 0;
}