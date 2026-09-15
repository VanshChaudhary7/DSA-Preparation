#include <bits/stdc++.h>

#include <iostream>
using namespace std;
string rev(string s) {
    reverse(s.begin(), s.end());
    return s;
}
string add(string& a, string& b) {
    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    string result;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0)
            sum += a[i--] - '0';
        if (j >= 0)
            sum += b[j--] - '0';
        carry = sum / 10;
        result.push_back((sum % 10 + '0'));
    }
    reverse(result.begin(), result.end());
    return result;
}
int main() {
    string n;
    cout << "N=";
    cin >> n;
    string ans = n;
    for (int k = 0; k <= 50; k++) {
        string reverseOfNumber = rev(ans);
        if (ans == reverseOfNumber) {
            cout << "Not Lychrel ( palindrome " << ans << " in " << k << " step)\n";
            return 1;
        }
        ans = add(ans, reverseOfNumber);
    }
    cout << "Likely Lychrel (no palindrome in 50 steps)\n";

    return 0;
}