#include <bits/stdc++.h>

#include <iostream>
using namespace std;
long long ans = 0;
long long coins(vector<int>& coin, int i, int target) {
    if (target == 0) {
        return 1;
    }
    if (i < 0)
        return 0;
    // take it
    long long result = 0;
    if (target - coin[i] >= 0)
        result += coins(coin, i, target - coin[i]);
    result += coins(coin, i - 1, target);
    return result;
}
int main() {
    int n, target;
    cin >> n;
    vector<int> coin(n);
    for (auto& x : coin)
        cin >> x;
    cin >> target;
    // cout << coins(coin, n - 1, target) << endl;
    vector<long long> ways(target + 1, 0);
    ways[0] = 1;
    for (int c : coin) {
        for (int t = c; t <= target; t++) {
            ways[t] += ways[t - c];
        }
    }
    cout << ways[target] << endl;

    return 0;
}