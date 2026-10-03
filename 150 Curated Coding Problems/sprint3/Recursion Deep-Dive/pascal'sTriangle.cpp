#include <bits/stdc++.h>

#include <iostream>
using namespace std;
long long pascalTriangle(int n, int k, vector<vector<long long>>& dp) {
    if (k == 0 || k == n)
        return 1;
    if (dp[n][k] != -1)
        return dp[n][k];
    return dp[n][k] = pascalTriangle(n - 1, k, dp) + pascalTriangle(n - 1, k - 1, dp);
}
int main() {
    int n;
    cin >> n;
    vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, -1));
    for (int k = 0; k <= n; k++)
        cout << (!k ? "" : " ") << pascalTriangle(n, k, dp);
    cout << "\n";
    return 0;
}