#include <bits/stdc++.h>

#include <iostream>
using namespace std;
void printMatrix(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    cout << "[";
    for (int i = 0; i < m; i++) {
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
    int m, n;
    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n)), newGrid(m, vector<int>(n));
    for (auto& row : grid) {
        for (auto& x : row) {
            cin >> x;
        }
    }
    int dr[8] = {
        1, -1, 0, 0, 1, -1, 1, -1};  //{up,down,left,right,bottom right diagonal,
                                     // up-left-diagonal,bottom left diagonal,upright diagonal}
    int dc[8] = {0, 0, -1, 1, 1, -1, -1, 1};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int AliveCount = 0;
            for (int k = 0; k < 8; k++) {
                int newr = i + dr[k];
                int newc = j + dc[k];
                if (newr >= 0 && newr < m && newc >= 0 && newc < n && grid[newr][newc]) {
                    AliveCount++;
                }
            }
            if (grid[i][j] && (AliveCount == 2 || AliveCount == 3))
                newGrid[i][j] = 1;
            else if (!grid[i][j] && AliveCount == 3)
                newGrid[i][j] = 1;
            else
                newGrid[i][j] = 0;
        }
    }
    printMatrix(newGrid);

    return 0;
}