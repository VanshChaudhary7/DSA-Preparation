#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N=";
    cin >> n;
    if (n < 1000 || n >= 10000) {
        cout << "Number out of range\n";
        return 1;
    }
    int count = 0;
    string s = to_string(n);
    for (int i = 1; i <= 7; i++) {
      if (s == "6174")
          break;
        sort(s.begin(), s.end());
        string rev = s;
        reverse(rev.begin(), rev.end());
        s = to_string(stoi(rev) - stoi(s));
        while(s.size()<4)s='0'+s;
        count++;
    }
    cout << count << endl;

    return 0;
}