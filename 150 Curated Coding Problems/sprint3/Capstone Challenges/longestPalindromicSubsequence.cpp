#include <bits/stdc++.h>

#include <iostream>
using namespace std;
vector<vector<int>> dp;  // using memoisation
int lps(string& s, string& rev, int i, int j) {
    if (i == s.size() || j == rev.size())
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (s[i] == rev[j]) {
        dp[i][j] = 1 + lps(s, rev, i + 1, j + 1);
        return dp[i][j];
    }
    return dp[i][j] = max(lps(s, rev, i + 1, j), lps(s, rev, i, j + 1));
}
int main() {
    string s;
    cin >> s;
    int n = s.size();
    string rev = s;
    reverse(rev.begin(), rev.end());
    // dp.resize(n,vector<int>(n,-1));
    // cout<<lps(s,rev,0,0)<<endl;
    dp.resize(n + 1, vector<int>(n + 1, 0));
    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            if (s[i] == rev[j]) {
                dp[i][j] = 1 + dp[i + 1][j + 1];
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }
    cout << dp[0][0] << endl;

    return 0;
}