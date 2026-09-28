#include <bits/stdc++.h>

#include <iostream>
using namespace std;
bool byFreq(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second != b.second)
        return a.second > b.second;
    else {
        return a.first < b.first;
    }
}
int main() {
    string s, word;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);
    stringstream ss(s);
    unordered_map<string, int> freq;
    while (ss >> word) {
        freq[word]++;
    }
    vector<pair<string, int>> ans(freq.begin(), freq.end());
    sort(ans.begin(), ans.end(), byFreq);
    bool first = true;
    for (auto str : ans) {
        cout << (first ? "" : ", ") << str.first << ":" << str.second;
        if (first)
            first = false;
    }
    cout << endl;

    return 0;
}