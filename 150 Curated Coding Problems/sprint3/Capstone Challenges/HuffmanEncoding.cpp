#include <bits/stdc++.h>

#include <iostream>
using namespace std;
unordered_map<char, int> freq;
bool byRank(const char a, const char b) {
    if (freq[a] != freq[b])
        return freq[a] > freq[b];
    return a < b;
}
int main() {
    string text;
    cin >> text;
    vector<char> order;
    for (char ch : text)
        freq[ch]++;
    for (auto& it : freq)
        order.push_back(it.first);
    sort(order.begin(), order.end(), byRank);
    int k = order.size();
    // encoding
    map<char, string> code;
    for (int i = 0; i < k; i++) {
        code[order[i]] = string(i, '1') + (i < k - 1 ? "0" : "");
    }
    if (k == 1)
        code[order[0]] = "0";
    string bits = "";
    for (char ch : text)
        bits += code[ch];
    // decoding
    string decoded = "";
    for (int i = 0; i < bits.size();) {
        if (k == 1) {
            decoded += order[0];
            i++;
            continue;
        }
        int ones = 0;
        while (ones < k - 1 && bits[i] == '1') {
            i++;
            ones++;
        };
        if (ones < k - 1)
            i++;
        decoded += order[ones];
    }
    for (int i = 0; i < k; i++)
        cout << (i == 0 ? "" : ", ") << order[i] << "-" << code[order[i]];
    cout << "\nEncoded: " << bits << " (" << bits.size() << " bits vs " << 8 * text.size()
         << " bits in 8-bit ASCII)\n";
    cout << "Decoded: " << decoded << endl;

    return 0;
}