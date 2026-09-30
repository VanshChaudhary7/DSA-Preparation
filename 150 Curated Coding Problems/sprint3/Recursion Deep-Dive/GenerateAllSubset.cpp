#include <bits/stdc++.h>

#include <iostream>
using namespace std;
bool orderBy(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}
void subset(vector<vector<int>>& ans, vector<int>& arr, vector<int> temp, int i, int n) {
    if (i >= n) {
        ans.push_back(temp);
        return;
    }
    temp.push_back(arr[i]);
    subset(ans, arr, temp, i + 1, n);
    temp.pop_back();
    subset(ans, arr, temp, i + 1, n);
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto& x : arr)
        cin >> x;
    vector<vector<int>> ans;
    subset(ans, arr, {}, 0, n);
    sort(ans.begin(), ans.end(), orderBy);
    cout << "[";
    for (int i = 0; i < ans.size(); i++) {
        cout << (i == 0 ? "" : " ") << "[";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << (j == 0 ? "" : ",") << ans[i][j];
        }
        cout << "]";
    }
    cout << "]" << endl;

    return 0;
}