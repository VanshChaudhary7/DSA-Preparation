#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int d = 0; d <= m + n - 2; d++) {
       int lo=max(0,d-n+1),hi=min(d,m-1);
       if(d%2==0){
        for(int i=hi;i>=lo;i--)cout<<(matrix[i][d-i])<<" ";
       }
       else
       for (int i = lo; i <= hi; i++){
           cout << (matrix[i][d - i]) << " ";}
    }
    cout << endl;

    return 0;
}