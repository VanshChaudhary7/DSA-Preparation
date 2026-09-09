#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N=";
    cin >> n;
    if (n > 0 && (n & (n - 1)) == 0)
        cout << "True\n";
    else
        cout << "False\n";

    return 0;
}