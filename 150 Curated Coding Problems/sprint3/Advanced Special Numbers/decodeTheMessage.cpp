#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    stringstream ss(text);
    string word;
    int count[26] = {0};
    int maxi = 0;
    char maxChar;
    while (ss >> word) {
        for (char ch : word) {
            if (!isalpha(ch))
                continue;
            count[toupper(ch) - 'A']++;
            if (maxi < count[toupper(ch) - 'A']) {
                maxi = count[toupper(ch) - 'A'];
                maxChar = toupper(ch);
            }
        }
    }
    int ties = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] == maxi)
            ties++;
    }
    if (ties > 1) {
        cout << "Cannot determine shift - no single most frequent letter\n";
        return 0;
    }
    int shift = ((maxChar - 'A') - 4 + 26) % 26;

    cout << "Most frequent: " << maxChar << "(" << maxi << " times) -> shift " << shift << ": ";
    word = "";
    bool first = true;
    stringstream st(text);
    while (st >> word) {
        cout << (first ? (first = false, "") : " ");
        for (char ch : word) {
            if (!isalpha(ch)) {
                cout << ch;
                continue;
            }
            if (ch >= 'A' && ch <= 'Z')
                cout << char(((ch - 'A') - shift + 26) % 26 + 'A');
            else {
                cout << char(((ch - 'a') - shift + 26) % 26 + 'a');
            }
        }
    }
    cout << endl;
    return 0;
}