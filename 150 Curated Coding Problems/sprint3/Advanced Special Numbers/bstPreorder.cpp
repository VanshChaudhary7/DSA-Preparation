#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    stack<int> st;
    for (auto& x : arr)
        cin >> x;
    bool ok = true;
    int low = INT_MIN;
    for (int x : arr) {
        if (x < low) {
            ok = false;
            break;
        }
        while (!st.empty() && st.top() < x) {
             low = st.top();
            st.pop();
        }
        st.push(x);
    }
    cout << (ok ? "Valid BST preorder" : "Not Valid BST preorder") << endl;

    return 0;
}