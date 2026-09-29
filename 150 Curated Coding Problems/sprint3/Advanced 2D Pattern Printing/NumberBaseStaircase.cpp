#include <bits/stdc++.h>

#include <iostream>
using namespace std;
string digit="0123456789ABCDEF";
string toBase(int n,int b) {
    string Number = "";
    while (n) {
        int mod = n % b;
            Number = digit[mod]+Number;
        n /= b;
    }
    return Number;
}

int main() {
    int a, b;
    cout << "Rows ";
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        cout << i << ": binary=" << toBase(i, 2) << ", octal=" << toBase(i, 8) << ", decimal=" << i
             << ", hex=" << toBase(i, 16) << endl;
    }
    return 0;
} 
