#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    stack<char> st;
    string s;
    cin >> s;
    bool ok = true;
    for (char ch : s) {
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        } else {
            if ((!st.empty()) && ch == ')' && st.top() == '(' || ch == ']' && st.top() == '[' ||
                ch == '}' && st.top() == '{')
                st.pop();
            else {
                ok = false;
            }
        }
    }
    cout << (ok && st.size() == 0 ? "Balanced" : "Not Balanced") << endl;

    return 0;
}