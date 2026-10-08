#include <bits/stdc++.h>

#include <iostream>
using namespace std;
vector<vector<long long>>dp;
long long countPaths(int m, int n) {
    if (m == 1 || n == 1) {
        return 1;
    }
    if(dp[m][n]!=-1)return dp[m][n];
    return dp[m][n]=countPaths(m - 1, n) + countPaths(m, n - 1);
}
int main() {
    int m, n;
    cin >> m >> n;
    dp.resize(m+1,vector<long long>(n+1,-1));
    cout << countPaths(m, n) << endl;

    return 0;
}