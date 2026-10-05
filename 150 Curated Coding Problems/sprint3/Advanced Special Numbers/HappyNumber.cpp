#include <bits/stdc++.h>

#include <iostream>
using namespace std;
bool isHappy(int n) {
    unordered_set<int> seen;
    while (n != 1 && !(seen.count(n))) {
        seen.insert(n);
        int newN = 0;
        for (int i = n; i > 0; i /= 10)
            newN += (i % 10) * (i % 10);
        n = newN;
    }
    return n == 1;
}
int main() {
    int n;
    cin >> n;
    bool first = true;
    for (int i = 1; i <= n; i++) {
        if (isHappy(i))
            cout << (first ? (first = false, "") : " ") << i;
    }
    cout << endl;
    return 0;
}